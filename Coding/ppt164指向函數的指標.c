#include <stdio.h>
void main()
{
	int func();
	int (*fp)();

	fp=func;
	printf("func's return value:%d\n", func());
	printf("Using functional pointer:%d", (*fp)());
}

func()
{
	return 123;
}

