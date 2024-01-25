#include <stdio.h>
void lowercase(char[]);
void main()
{	char str[80];
	printf("Input a string:");
	scanf("%s", str);
	lowercase(str);
	printf(str);
}
void lowercase(char s[])
{	int i=0;
	while(s[i]!='\0')
	{	if(s[i]>=65 && s[i] <=90)
			s[i]+=32;
		i++;
	}
}

