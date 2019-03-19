#include "mp4-err.h"

const char *error_msg(int code) 
{
	switch(code) {
		MP4_ERROR_CODES(MP4_ERROR_MSG)
		default: return "Unknown Error !!";
	}

}
