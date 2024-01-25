#include <stdio.h>
main()
{
	int i, j, n;
	printf("Please Input a number (1~20):");
	scanf("%d", &n);
	for(i=1; i<=20; i++)
	{
		for(j=1; j<=i; j++)
		{
			if( (i>n) && (j>n/2) )
				goto loopOut;
			printf("O");
		}
		printf("\n");
	}
loopOut:
	printf("\nThe end.");
}

