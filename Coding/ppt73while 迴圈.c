#include <stdio.h>
void main()
{
	int i=1;
	long sum=0;
	while(i<=1000)
	{
		sum+=i;
		i++;
	}
	printf("1+2+3+...+1000=%ld",sum);
}

