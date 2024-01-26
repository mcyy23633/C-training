#include <stdio.h>
main()
{
	int i;
	int a[3][4]= { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int *p;
	p=a;
	for(i=0; i<12; i++)
	{
		printf("p+%d=%x\t*(p+%d)=%d\t", i, p+i, i, *(p+i));
		printf("&a[%d][%d]=%x\n", i/4, i%4, &a[i/4][i%4]);
	}
}


