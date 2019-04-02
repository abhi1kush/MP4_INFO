#include <stdio.h>
#include <sys/types.h>
#include "mp4-err.h"
#include <stdint.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/mman.h>

#include "box-parser.h"

typedef	char	*caddr_t;

int main(int argc, char *argv[])
{
	int fd;
	int page_size;
	void *mmap_ret;
	uint8_t *fptr = NULL;
	struct stat sbuf;


	MP4_ASSERT(2 == argc, "Usage: <filename>\n", return -1);
	fd = open(argv[1], O_RDONLY);
	MP4_ASSERT(fd >= 0, "open() for file failed\n", return -1);
	
	if (stat(argv[1], &sbuf) == -1) {
		perror("stat");
		return -1;
	}
	mmap_ret = mmap((caddr_t)0, sbuf.st_size, PROT_READ, MAP_SHARED, fd, 0);
	if(mmap_ret == (void *)(-1)) {
		perror("mmap");
		return -1;
	}
	
	/*ready to use mmaped file.*/
	box_parser(mmap_ret, sbuf.st_size);

	return 0;
}
