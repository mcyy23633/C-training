#include <stdio.h>
main()
{
	int y, m, d;

	printf("Please input the date (YYYY-MM-DD)>");
	scanf("%d-%d-%d", &y, &m, &d);
	printf("\nThe date is %d-%d-%d.", y, m, d);
}

