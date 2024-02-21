#include<stdio.h> 
void main()
{	char *func(int);
	char *(*fp)(int);
	fp=func;
	printf("%s\n", func(1));
	printf("%s", (*fp)(0));
}

char *func(int i)
{	if(i)
	     return "C is fun!";
	else
	    return "Have a good time!";
}

