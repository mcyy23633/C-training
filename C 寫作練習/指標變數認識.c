#include <stdio.h>
main()
{	int i=123;
	int *p;
	printf("Pointer p at %x, its value is %x.\n", &p, p);
	p=&i;
	/* *p=i; */
	printf("Variable i at %x, its value is %d.\n", &i, i);
	printf("Pointer p at %x, its value is %x.\n", &p, p);
	i=345;
	printf("*p=>%d\n", *p);
	i=456;
	*p=i;
	printf("*p=>%d\n", *p);
}

