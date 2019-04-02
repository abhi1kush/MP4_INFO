#include <stdint.h>
#include <stdio.h>
#include "mp4-err.h"
#include "box-parser.h"

#define ExitOnErr(return_var_name, err_code) do{\
	return_var_name = err_code;\
	goto EXIT;\
}while(0);

#define ExitOnNull(return_var_name, x) do{\
	if (NULL == x){\
		return_var_name = MP4_EINVAL;\
		goto EXIT;\
	}\
}while(0);			                           

typedef struct __box_header_s
{
	uint32_t size;
	uint32_t type;
}box_header_t;

ERR_T box_parser(const void *data, size_t size) 
{
	ERR_T ret = MP4_ERR_OK;
	uint8_t *fptr = (uint8_t *)data;
	size_t offset = 0;
	char *ftyp = "ftyp";

	printf("%x %x %x %x\n", ftyp[0], ftyp[1], ftyp[2], ftyp[3]);	
	ExitOnNull(ret, data);
	printf("%x %x %x %x\n",fptr[0], fptr[1], fptr[2], fptr[3]);

	while (offset < size) {
		
		offset++;
	}

EXIT:
	return ret;
}
