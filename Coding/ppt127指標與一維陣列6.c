#include <stdio.h>
main()
{
	int a[]= { 10, 20, 30, 40, 50, 60};
	int *p;
	p=a;
	*p+=2;
	printf("*p=%d\n", *p);
	*p++;
	printf("*p=%d\n", *p);
	p++;
	printf("*p=%d\n", *p);
	++*p;
	printf("*p=%d\n", *p);
}

