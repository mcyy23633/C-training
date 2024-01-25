#include <stdio.h>
main()
{
	int i=123;
	int *p;
	p=&i;
	printf("Variable i at %x, its value is %d.\n", &i, i);
	printf("Pointer p at %x, its value is %x.\n", &p, p);
	printf("*(&i)=%d  *p=%d\n", *(&i), *p);
}

