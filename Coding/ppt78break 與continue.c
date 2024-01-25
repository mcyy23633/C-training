#include <stdio.h>
main()
{
	int n;
	while(1)
	{
		printf("Please input a number:");
		scanf("%d", &n);
		if(n==0)
			break;
		else
			printf("Hex:%x\n\n", n);
	}
}

