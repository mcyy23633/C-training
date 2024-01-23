#include <stdio.h>
#define SIZE 12
void main()
{
	int i, t=0, find;
	int data[SIZE]= { 11, 16, 21, 35, 42, 56,
	                  68, 69, 76, 81, 82, 95
	                };
	int l=0, r=SIZE, m;
	printf("Data:");
	for(i=0; i<SIZE; i++)
		printf("%4d", data[i]);
	printf("\nInput a number to search:");
	scanf("%d", &find);
	for(i=0; i<SIZE; i++)
		printf("%-4d", data[i]);
	printf("\n");
	while(1)
	{
		m=(l+r)/2;
		t++;
		for(i=0; i<m; i++)
			printf("    ");
		if(data[m]==find)
		{
			printf("O\nSearch %d time(s).", t);
			break;
		}
		else
		{
			if(m==l)
			{
				printf("Can not find %d.", find);
				break;
			}
			if  (data[m]<find)
				l=m;
			else
				r=m;
			printf("X\n");
		}
	}
}


