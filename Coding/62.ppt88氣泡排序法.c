#include<stdio.h>
#define SIZE 5
void main()
{
	int i,j,k,temp;
	int a[SIZE];
	printf("Please input 5 numbers:");
	for(i=0; i<SIZE; i++)
		scanf("%d",&a[i]);
	for(i=0; i<SIZE-1; i++)
		for(j=0; j<SIZE-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				printf("Change\t");
			}
			else
				printf("\t");
			for(k=0; k<SIZE; k++)
				printf("%d\t",a[k]);
			printf("\n");
		}
}
