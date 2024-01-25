#include <stdio.h>
void main()
{
	int i, j;
	int a[3][4];
	for(i=0; i<3; i++)
		for(j=0; j<4; j++)
			a[i][j]=i*10+j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
			printf("a=>%x, a[%d]=>%x,   	 			&a[%d][%d]=>%x, a[%d][%d]=%d\n", 	a,i,a[i],i,j,&a[i][j],i, j, a[i][j]);
		printf("\n");
	}

}

