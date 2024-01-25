#include <stdio.h>
main()
{
	long n, i=2;
	int isPrime=1;
	printf("Please input a number:");
	scanf("%ld", &n);
	do
	{
		if( (n%i==0) && (n!=2) )
		{
			isPrime=0;
			break;
		}
		i++;
	}
	while(i<n);
	if  (isPrime)
		printf("%ld is a prime number!",n);
	else
		printf("%ld is not a prime number!",n);
}

