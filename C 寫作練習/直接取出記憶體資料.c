#include <stdio.h>
void main()
{
	char *p;
	char *q=0;
    char str[20]="My first C program.";
    p=str;
	p=(char*)0x62fdf4;
	printf("p address==> %x\n", p);
	printf("p=%c\n", *p);
	printf("q=%s", q);
}
