#include <stdio.h>
main()
{	int i;
	printf("Please input a number:");
	scanf("%d", &i);
	if(!(i%2))
		printf("It is an even number.");
	if(i%2)
		printf("It is an odd number.");
}

