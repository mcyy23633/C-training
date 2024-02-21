#include <stdio.h>
void main()
{	int i, j;
	char *m[6] = {"Michael", "Bill", "Carlson",
			     "Stephanie", "Joe", "Mary"};
	char c;
	for(i=0; i<7; i++)
	{     for(j=0; j<20; j++)
		  {   c=*(*(m+i)+j);
		       if(c=='\0')
		            break;
		       else
			   printf("*(*(m+%d)+%d)=%c\t", i, j, c);
		  }
		printf("\n");
	}
}
