#include <stdio.h>
main()
{
	int i=7, j=3;
	float f1, f2, f3;
	f1 = i/j;
	f2 = (float)i/j;
	f3 = i/(float)j;
	printf("%.2f\t%.2f\t%.2f", f1, f2, f3);
}

