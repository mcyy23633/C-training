#include <stdio.h>
void str2l(char*);
void char2l(char*);
void main()
{
	char str[80];

	printf("Input a string:");
	gets(str);
	str2l(str);
	printf(str);
}
void str2l(char* s)
{
	int i, len;

	len=strlen(s);
	for(i=0; i<len; i++)
		char2l(s+i);
}

void char2l(char* c)
{
	if(*c >='A' && *c<='Z')
		*c+=32;
}

