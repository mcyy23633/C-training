#include <stdio.h>
void main()
{
	int func();

	printf("func's adress:%x\n", func);
	printf("func's return value:%u\n", func());
}

func()
{
	return 123;
}

