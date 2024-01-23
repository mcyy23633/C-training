#include <stdio.h>
void main()
{
	int i;
	int score[10];
	for(i=0; i<10; i++)
		printf(¡§%x, %x, score+%d==>%x, %d\n¡¨, score, &score[i], i,score+i,score[i]);
}

