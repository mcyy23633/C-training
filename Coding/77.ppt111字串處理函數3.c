#include <stdio.h>
#include <string.h>
void main()
{
	char str[20]  ="Dennis Ritchie";
	char s[]="Shinder Lin";

	strcpy(str, "Hello");
	printf("str=%s\n", str);
	printf("sizeof(str)=%d\n", sizeof(str));
	strcpy(str, s);
	printf("str=%s\n", str);
	printf("sizeof(str)=%d\n", sizeof(str));
}

