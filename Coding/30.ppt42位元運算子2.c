#include <stdio.h>
main()
{
	int i;
	char odd[]="Odd number!";
	char even[]="Even number!";

	printf("Please input a number:");
	scanf("%d", &i);

	printf("%s", (i&1)?odd:even);
}

