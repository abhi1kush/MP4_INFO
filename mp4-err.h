#ifndef __MP4_H__
#define __MP4_H__
#define MP4_ASSERT(expr, msg, stmt) if (!(expr)) {printf("%s\n", msg); stmt;}

#define MP4_ERROR_CODES(X) X( 0, MP4_ERROR_OK, "Succes!! No error!!\n") \
	                   X(-1, MP4_ERROR_FAILED, "ERROR OCCURED!! FAILED \n")          \
	                   X(-2, MP4_ERROR_INVALID_PARAM, "Invalid parameter passed\n")  \
	                   X(-3, MP4_ERROR_INVALID_PARAM_VALUE, "Invalid parameter value passed\n") \

#define MP4_ERROR_ENUM(ID, NAME, ERROR_MSG) NAME = ID,
#define MP4_ERROR_MSG(ID, NAME, ERROR_MSG) case ID: return ERROR_MSG;

enum {
	MP4_ERROR_CODES(MP4_ERROR_ENUM)
};

const char *error_msg(int code);
#endif
