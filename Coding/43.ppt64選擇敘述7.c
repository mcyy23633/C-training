#include <stdio.h>
main()
{
	char c;
	printf("Please input one of a, b, c:");
	scanf("%c", &c);
	switch (c)
	{
		case 'a':
			printf("Apple");
			break;
		case 'b':
			printf("Banana");
			break;
		case 'c':
			printf("Cake");
			break;
		default:
			printf("You select nothing.");
	}
}

