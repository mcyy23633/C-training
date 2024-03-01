#include <stdio.h>
#include <string.h>
#define SIZE 5
#define LEN 8
void strbubble(char[][LEN], int);
void strselect(char[][LEN], int);
void strchange(char[], char[]);
void main()
{
	int i,sort,l=0, r=SIZE, m,t=0;
	char s[SIZE][LEN];
	char str[8];

	puts("��J 10 �ӳ�r:");
	for(i=0; i<SIZE; i++)
		gets(s[i]);
	printf("�п�� 1)���  2)��w �ƧǪk:");
	scanf("%d", &sort);
	if (sort==1)
	{
		strselect(s, SIZE);
		puts(">>-- �� ��� �ƧǪk��:");
	}
	else
	{
		strbubble(s, SIZE);
		puts(">>-- �� ��w �ƧǪk��:");
	}
	for(i=0; i<SIZE; i++)
		puts(s[i]);

	printf("�r��C��:\n");
	for(i=0; i<SIZE; i++)
		printf("%s\t", s[i]);
	printf("\n\n�п�J�j���M�r��:");
	scanf("%s",str);

	for(i=0; i<SIZE; i++)
		printf("%s\t", s[i]);
	printf("\n");
	while(1)
	{
		m=(l+r)/2;
		t++;
		for(i=0; i<m; i++)
			printf("\t");
		if(strcmp(s[m],str)==0)
		{
			printf("O\nSearch %d time(s).", t);
			break;
		}
		else
		{
			if(m==l)
			{
				printf("Can not find %s.", str);
				break;
			}
			if (strcmp(str,s[m])>0)
				l=m;
			else
				r=m;
			printf("X\n");
		}
	}


}
void strselect(char sa[][LEN], int size)
{
	int i, j;
	for(i=0; i<size-1; i++)
		for(j=i+1; j<size ; j++)
			if( strcmp(sa[i], sa[j])>0 )
				strchange(sa[i], sa[j]);
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
