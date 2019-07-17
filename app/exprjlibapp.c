#include <ubinos.h>
#include <exprjlib.h>
#include <exprjlibapp.h>

#if (INCLUDE__APP__exprjlibapp == 1)

#include <stdio.h>

int appmain(int argc, char * argv[]) {
	int r;

	(void) r;

	printf("\n\n\n\r");
	printf("================================================================================\n\r");
	printf("exprjlibapp (build time: %s %s)\n\r", __TIME__, __DATE__);
	printf("================================================================================\n\r");
	printf("\n\r");
	printf("\n\r");

	int a = 7;
	int b = 3;
	float c = 7.;
	float d = 3.;

	for (unsigned int i = 0;; i++) {
		printf("exprjlibapp ! (%u)\n\r", i);

#if !(EXPRJLIB__EXCLUDE_MYADD == 1)
		printf("   %8d myadd      %8d = %8d\n\r", a, b, myadd(a, b));
#endif /* !(EXPRJLIB__EXCLUDE_MYADD == 1) */

#if !(EXPRJLIB__EXCLUDE_MYSUBTRACT == 1)
		printf("   %8d mysubtract %8d = %8d\n\r", a, b, mysubtract(a, b));
#endif /* !(EXPRJLIB__EXCLUDE_MYSUBTRACT == 1) */

#if !(EXPRJLIBAPP__EXCLUDE_MYMULTIPLY == 1)
		printf("   %8f mymultiply %8f = %8f\n\r", c, d, mymultiply(c, d));
#endif /* !(EXPRJLIBAPP__EXCLUDE_MYMULTIPLY == 1) */

#if !(EXPRJLIBAPP__EXCLUDE_MYDIVIDE == 1)
		printf("   %8f mydivide  %8f = %8f\n\r", c, d, mydivide(c, d));
#endif /* !(EXPRJLIBAPP__EXCLUDE_MYDIVIDE == 1) */

		printf("\n\r");

		a++;
		b++;
		c++;
		d++;

		bsp_busywaitms(1000);
	}

	return 0;
}

#endif /* (INCLUDE__APP__exprjlibapp == 1) */

