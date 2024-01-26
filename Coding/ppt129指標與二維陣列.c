#include <stdio.h>
main()
{
	int i, j;
	int a[3][4];
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
			printf("&a[%d][%d]=%x\t", i, j, &a[i][j]);
		printf("\n");
	}
	for(i=0; i<3; i++)
	{
		printf("*(a+%d)=%x\t", i, *(a+i));
		printf("a[%d]=%x\n", i, a[i]);
	}
}

