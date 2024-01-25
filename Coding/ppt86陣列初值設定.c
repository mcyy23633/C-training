#include <stdio.h>
#define SIZE 6
int g[SIZE];
void main()
{
	int i;
	static int s[SIZE]= { 70, 80, 90};
	int a[SIZE];
	for(i=0; i<SIZE; i++)
	{
		printf("g[%d]=%d\t\t", i, g[i]);
		printf("s[%d]=%d\t\t", i, s[i]);
		printf("a[%d]=%d\n", i, a[i]);
	}
}

