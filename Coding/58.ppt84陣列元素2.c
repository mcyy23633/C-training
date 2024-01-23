#include <stdio.h>
#define ARRAYSIZE 6
void main()
{
	int i;
	int a[ARRAYSIZE];
	for(i=0; i<ARRAYSIZE; i++)
		a[i]=5-i;
	for(i=0; i<ARRAYSIZE; i++)
		printf("a[%d]=%d \n", i, a[i]);
}

