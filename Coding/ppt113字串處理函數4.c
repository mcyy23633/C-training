#include <stdio.h>
#define SIZE 5
#define LEN 60
void strbubble(char[][LEN], int);
void strchange(char[], char[]);
void main()
{
	int i;
	char s[SIZE][LEN];

	puts("Input 5 strings:");
	for(i=0; i<SIZE; i++)
		gets(s[i]);
	strbubble(s, SIZE);
	puts(">>----------------After Sorting:");
	for(i=0; i<SIZE; i++)
		puts(s[i]);
}
void strbubble(char sa[][LEN], int size)
{
	int i, j;
	for(i=0; i<size-1; i++)
		for(j=0; j<size-i-1 ; j++)
			if( strcmp(sa[j], sa[j+1])>0 )
				strchange(sa[j], sa[j+1]);
}

void strchange(char a[], char b[])
{
	char temp[LEN];

	strcpy(temp, a);
	strcpy(a, b);
	strcpy(b, temp);
}

