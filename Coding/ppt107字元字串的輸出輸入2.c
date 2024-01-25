#include <stdio.h>
void main()
{
	char str[80];

	puts("What is your name:");
	gets(str);
	puts("");
	puts("Hello, ");
	puts(str);
}

