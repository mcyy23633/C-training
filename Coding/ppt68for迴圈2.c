#include <stdio.h>
main()
{
	int j, sum;

	for (j=1, sum=0; j<=9; sum+=j*j, j++);
	printf("%d", sum);
}

