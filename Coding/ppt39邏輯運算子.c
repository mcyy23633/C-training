#include <stdio.h>
main()
{
	int A,B;
	printf("A\tB\tA&&B\tA||B\t!A\n");
	A=1, B=1;
	printf("%d\t%d\t%d\t%d\t%d\n",A,B,A&&B,A||B,!A);
	A=1, B=0;
	printf("%d\t%d\t%d\t%d\t%d\n",A,B,A&&B,A||B,!A);
	A=0, B=1;
	printf("%d\t%d\t%d\t%d\t%d\n",A,B,A&&B,A||B,!A);
	A=0, B=0;
	printf("%d\t%d\t%d\t%d\t%d\n",A,B,A&&B,A||B,!A);
}

