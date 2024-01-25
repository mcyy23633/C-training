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
	
	printf("請選擇(1)選擇(2)氣泡:");
	scanf("%c",&c);
	switch(c)
	{
		case'1':
			printf("選擇");
			break;
		case'2':
			printf("氣泡");
			break;
			default:
			printf("請重新再輸入一次");
	}
}

