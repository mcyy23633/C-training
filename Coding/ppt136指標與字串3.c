#include <stdio.h>
void main()
{
	char *str="C is fun!";
	char *p;

	p=str+strlen(str);
	while(--p>=str)
		putchar(*p);
}

