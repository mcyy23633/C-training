#include <stdio.h>
main()
{
	int j;

	for(j=0; j<10; j++)
	{
		if(j==4)
			continue;
		printf("%d  ", j);
	}
}

