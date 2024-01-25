#include <stdio.h>
void main()
{
	char item[2][80];

	printf("What is your name:");
	gets(item[0]);
	printf("Input your message:");
	gets(item[1]);

	printf("Hello, %s.\n", item[0]);
	printf("Your message is \"%s\".", item[1]);
}

