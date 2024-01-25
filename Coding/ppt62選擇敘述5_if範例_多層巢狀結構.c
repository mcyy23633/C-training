#include <stdio.h>
main()
{
	int N;
	char G;
	printf("Please input your score:");
	scanf("%d", &N);
	if (N>=90)
	{
		G = 'A';
	}
	else if (N>=80)
	{
		G = 'B';
	}
	else if (N>=70)
	{
		G = 'C';
	}
	else if (N>=60)
	{
		G = 'D';
	}
	else  G = 'F';
	printf("You get:%c", G);
}

