#include <stdio.h>
char* flip(char*);
void main()
{
	char str[80];
	char *afterflip;

	printf("Input a string:");
	gets(str);
	afterflip=flip(str);
	printf("str=\"%s\"\n", str);
	printf("afterflip=\"%s\"", afterflip);
}
char* flip(char* s)
{
	char d[80];
	int i, len;
	char *p;

	len=strlen(s);
	p=d+len-1;
	for(i=0; i<len; i++)
		*(p-i)=*(s+i);
	d[len]='\0';
	return d;
}

