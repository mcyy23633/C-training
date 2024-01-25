#include <stdio.h>
main()
{
	int i, j;
	for(i=1; i<=5; i+=2)
	{
		for(j=2; j<=6; j+=2)
		{
			printf("(%d,%d)\t", i, j);
		}
		printf("\n");
	}
}

