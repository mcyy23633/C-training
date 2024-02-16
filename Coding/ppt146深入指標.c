#include <stdio.h>
void main()
{
	int i, j;
	char n[6][15] = { "Michael", "Bill", "Carlson",
	                  "Stephanie", "Joe", "Mary"
	                };
	char *m[6] = {"Michael", "Bill", "Carlson",
	              "Stephanie", "Joe", "Mary"
	             };
	for(i=0; i<5; i++)
	{
		printf("n[%d]-n[%d]=%d\t", i+1, i, n[i+1]-n[i]);
		printf("m[%d]-m[%d]=%d\t", i+1, i, m[i+1]-m[i]);
		printf("%s\n", m[i]);
	}
}

