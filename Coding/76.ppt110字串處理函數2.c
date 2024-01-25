#include <stdio.h>
#include <string.h>
void main()
{
	char str1[]  ="I Like";
	char str2[20]="I Like";
	char str3[20]="I Like";
	char str4[]=" Joan!";

	strcat(str1, str4);
	strcat(str2, str4);
	strcat(str3, str4);
	printf("str1=%s\n", str1);
	printf("str2=%s\n", str2);
	printf("str3=%s\n", str3);
	printf("str4=%s\n", str4);
}

