#include <stdio.h>

ExitOnErr(return_var_name, err_code) return_var_name = err_code; goto EXIT;
ExitOnNull(return_var_name, x) if (NULL == x) \
	{ \
		return_var_name = MP4_ERROR_INVALID_PARAM; \
		goto EXIT; \
	}

ERR_T box_parser(const char *data, uint64_t size) 
{
	ERR_T ret = MP4_ERR_OK;
	uint64_t offset = 0;
	ExitOnNull(data);

	while (offset < size) {

		offset++;
	}

EXIT:
	return ret;
}
