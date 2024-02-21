#include <stdio.h>
void main(int argc, char *argv[])
{
	if(argc<2 || argc>3)
	{
		printf("Using:hi [-option] YOURNAME\n");
		printf("option:1~3");
	}
	else if(*argv[1]!='-')
		printf("Good day, %s!", argv[1]);
	else
	{
		switch(*(argv[1]+1))
		{
			case '1':
				printf("Good morning, ");
				break;
			case '2':
				printf("Good afternoon, ");
				break;
			case '3':
				printf("Good night, ");
				break;
			default:
				printf("Good day, ");
		}
		printf("%s!", argv[2]);
	}
}

