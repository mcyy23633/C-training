#include <stdio.h>
void main()
{
	int i=1;
	long sum=0;
	while(1)
	{
		sum+=i;
		i+= 1;
	}
	printf("1+2+3+...+1000=%ld",sum);
}

