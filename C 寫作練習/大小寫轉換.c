#include <stdio.h>
void lowercase(char[],int);
void upercase(char[],int);
void main()
{   int i = 0;
	char str[80];
	printf("Input a string:");
	scanf("%s", str);
	while(str[i]!='\0')
	{	if(str[i]>=65 && str[i] <=90)
			lowercase(str,i);
		  else	
			upercase(str,i);
		i++;
	}
	printf(str);
}
void lowercase(char s[],int k)
{	s[k] +=32;
}
void upercase(char s[],int k)
{	s[k] -=32;
}
