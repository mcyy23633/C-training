#include <stdio.h>
main()
{
	int i;
	int  arr[]= {65537, 20, 30, 40, 50, 60};
	int *p;
	char *q;

	p=arr;
	(char*)arr;
	for(i=0; i<6; i++)
	{
		printf("*(p+%d)=%d\t", i, *(p+i));
		printf("*(q+%d)=%d\n", i, *(q+i));
	}
}

