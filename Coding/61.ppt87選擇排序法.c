#include <stdio.h>
#define SIZE 5
void main()
{
	int i, j, k, temp;
	int a[SIZE];
	printf("Please input 5 numbers:");
	for(i=0; i<SIZE; i++)
		scanf("%d", &a[i]);
	for(i=0; i<SIZE-1; i++)
		for(j=i+1; j<SIZE ; j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				printf("Change\t");
			}
			else
				printf("\t");
			for(k=0; k<SIZE; k++)
				printf("%d\t", a[k]);
			printf("\n");
		}
}

