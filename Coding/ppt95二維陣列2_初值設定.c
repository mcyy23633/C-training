#include <stdio.h>
#define ROW 2
#define COL 3
void main()
{
	char c;
	int i, j;
	int a[ROW][COL]= {{1, 2},{ 4, 5}};
	int b[ROW][COL]= { 1, 2, 4, 5};
	for(i=0; i<ROW; i++)
	{
		for(j=0; j<COL; j++)
			printf("a[%d][%d]=%d\t", i, j, a[i][j]);
		printf("\n");
	}
	printf("\n");
	for(i=0; i<ROW; i++)
	{
		for(j=0; j<COL; j++)
			printf("b[%d][%d]=%d\t", i, j, b[i][j]);
		printf("\n");
	}
	
	printf("�п��(1)���(2)��w:");
	scanf("%c",&c);
	switch(c)
	{
		case'1':
			printf("���");
			break;
		case'2':
			printf("��w");
			break;
			default:
			printf("�Э��s�A��J�@��");
	}
}

