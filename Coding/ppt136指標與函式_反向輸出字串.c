#include <stdio.h>
void flip(char*);
void main()
{
	char str[80];
	printf("Input a string:");
	gets(str);
	flip(str);
	printf(str);
}
void flip(char* s)
{
	char d[80];
	int i, len;
	char *p;
	len=strlen(s);
	p=d+len-1;
	for(i=0; i<len; i++)
		*(p-i)=*(s+i);
	d[len]='\0';
	strcpy(s, d);
}

