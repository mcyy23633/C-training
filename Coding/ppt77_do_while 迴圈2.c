#include <stdio.h>
main()
{
	int n, i=2;
	int isPrime=1;
	printf("Please input a number:");
	scanf("%d", &n);
	do
	{
		if ( (n%i==0) && (n!=2) )
			isPrime=0;
		i++;
	}
	while(i<n);
	if (isPrime)
		printf("%d is a prime number!",n);
	else
		printf("%d is not a prime number!",n);
}

