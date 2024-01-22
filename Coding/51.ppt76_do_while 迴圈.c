#include <stdio.h>
main()
{
	int i=1;
	long sum=0;
	do
	{
		sum+=i;
		i++;
	}
	while(i<=1000);
	printf("1+2+3+...+1000=%ld",sum);
}

