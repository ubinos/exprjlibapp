#include <exprjlibapp.h>

#if !(EXPRJLIBAPP__EXCLUDE_MYMULTIPLY == 1)

float mymultiply(float a, float b) {
	return (a * b);
}

#endif /* !(EXPRJLIBAPP__EXCLUDE_MYMULTIPLY == 1) */

#if !(EXPRJLIBAPP__EXCLUDE_MYDIVIDE == 1)

float mydivide(float a, float b) {
	return (a / b);
}

#endif /* !(EXPRJLIBAPP__EXCLUDE_MYDIVIDE == 1) */

