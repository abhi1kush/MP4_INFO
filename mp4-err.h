#ifndef __MP4_H__
#define __MP4_H__
#define MP4_ASSERT(expr, msg, stmt) if (!(expr)) {printf("%s\n", msg); stmt;}

#define MP4_ERROR_CODES(X) X( 0, MP4_ERR_OK, "Succes!! No error!!\n") \
	                   X(-1, MP4_ERR_FAILED, "ERROR OCCURED!! FAILED \n")          \
	                   X(-2, MP4_EINVAL, "Invalid parameter passed\n")  \

#define MP4_ERROR_ENUM(ID, NAME, ERROR_MSG) NAME = ID,
#define MP4_ERROR_MSG(ID, NAME, ERROR_MSG) case ID: return ERROR_MSG;

typedef int ERR_T;

enum {
	MP4_ERROR_CODES(MP4_ERROR_ENUM)
};

const char *error_msg(int code);
#endif
