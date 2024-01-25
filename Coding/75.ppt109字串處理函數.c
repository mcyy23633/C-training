#include <stdio.h>
#include <string.h>
void main()
{
	char str1[]  ="I Love C.";
	char str2[20]="I Love C.";

	printf("sizeof(str1)=%d\n", sizeof(str1));
	printf("strlen(str1)=%d\n", strlen(str1));
	printf("sizeof(str2)=%d\n", sizeof(str2));
	printf("strlen(str2)=%d\n", strlen(str2));
}

