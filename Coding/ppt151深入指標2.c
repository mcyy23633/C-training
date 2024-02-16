#include <stdio.h>
#define SIZE 6
void main()
{
	char *m[SIZE] = {"Michael", "Bill", "Carlson",
	                 "Stephanie", "Joe", "Mary"
	                };
	int i, j;
	char *temp;
	char *ori;

	ori=m[0];

	for(i=0; i<SIZE-1; i++)
		for(j=0; j<SIZE-i-1 ; j++)
			if( strcmp(*(m+j), *(m+j+1))>0 )
			{
				temp=m[j];
				m[j]=m[j+1];
				m[j+1]=temp;
			}
	puts(">>----------------After Sorting:");
	for(i=0; i<SIZE; i++)
		puts(m[i]);
	puts(">>----------------Strings in memory:");
	for(i=0; i<40; i++)
		if(*(ori+i)=='\0')
			putchar(' ');
		else
			putchar(*(ori+i));
}

