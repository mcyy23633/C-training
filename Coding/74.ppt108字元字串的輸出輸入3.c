#include <stdio.h>
void main()
{
	char c=0;

	while(c!=27)
	{
		c=getch();
		printf("%d\t", c);
	}
}

