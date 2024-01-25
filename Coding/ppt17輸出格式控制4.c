#include <stdio.h>
main()
{
	float f =6.789;

	printf("%9f%9f%9f \n", f, f, f);
	printf("%9.1f%9.2f%9.3f \n", f, f, f);
	printf("%-9.1f%-9.2f%-9.3f", f, f, f);
}

