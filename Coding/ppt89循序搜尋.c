#include<stdio.h>
#define SIZE 7
void main()
{
	int i,j,find;
	int data[SIZE]={48,82,75,22,18,73,36};
	printf("Data:");
	for(i=0;i<SIZE;i++)
			printf("%4d",data[i]);
	printf("\nInnput a number to search:");
	scanf("%d",&find);
	for(i=0;i<SIZE;i++)
	{
			for(j=0;j<i;j++)printf("\t");
			if(find == data[i])
			{
					printf("O\nSearch %d time(s)",i+1);
					return;
			}
			else
					printf("X\n");
	}
	printf("Can not find %d.",find);
}
