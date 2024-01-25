#include <stdio.h>
#define ROW 3
#define COL 4
void main()
{
	int i, j;
	int a[ROW][COL];
	printf("\ta ==>%x\n",a);
	for(i=0; i<ROW; i++)
		for(j=0; j<COL; j++)
		{
			printf("a[%d][%d] at %x", i, j, &a[i][j]);
			if(j==0)
				printf("\t\ta[%d]=%x\n", i, a[i]);
			else
				printf("\n");
		}
}

