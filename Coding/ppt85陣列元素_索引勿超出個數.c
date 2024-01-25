#include <stdio.h>
#define ARRAYSIZE 6
void main()
{
	int i, j;
	int a[ARRAYSIZE];
	printf("How many students are there in your class?\n");
	for(i=0; i<ARRAYSIZE; i++)
	{
		a[i]=i*10+5;
		printf(¡§(%d)%d\t", i, a[i]);
	       }
		       printf("\n(Please select one answer)>");
		       scanf("%d", &j);
		       printf("There are %d students in your class.", a[j]);
	       }

