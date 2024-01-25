#include <stdio.h>
main()
{
	int i = 456;
	char c = 'A';
	char s[] ="Hello";  /* string */
	printf("%-7d%-7c%-7s \n", i, c, s);
	printf("%-7c%-7s%-7d \n", c, s, i);
	printf("%-7s%-7d%-7c \n", s, i, c);
}

