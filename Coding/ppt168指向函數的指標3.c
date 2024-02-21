#include <stdio.h>
void main(int argc, char *argv[])
{
	int add(int, int);
	int multiply(int, int);
	int subtract(int, int);
	int bad(int, int);
	int (*fp)(int, int);
	int i=1;


	while(i<argc)
	{
		if(!strcmp("+", argv[i]))
			fp=add;
		else if(!strcmp("*", argv[i]))
			fp=multiply;
		else if(!strcmp("-", argv[i]))
			fp=subtract;
		else
			fp=bad;
		(*fp) (atoi(argv[i+1]), atoi(argv[i+2]));
		i+=3;
	}
}

add(int a, int b)
{
	printf("%d\n", a+b);
}

multiply(int a, int b)
{
	printf("%d\n", a*b);
}

subtract(int a, int b)
{
	printf("%d\n", a-b);
}

bad(int a, int b)
{
	printf("No this option!\n");
}

