#include <stdio.h>
void main()
{
	int i, *p, **pp;

	i=100;
	p=&i;
	pp=&p;
	printf("i  address:%x\t value:%u\n", &i, i);
	printf("p  address:%x\t value:%x\n", &p, p);
	printf("pp address:%x\t value:%x\n", &pp, pp);
	printf("*pp=%x\n", *pp);
	printf("**pp=%u", **pp);
}

