#include <stdio.h>
#include <string.h>
main()
{	int i;
	int iarr[]={10, 20, 30, 40, 50, 60};
	char carr[]={'S','h','i','n','d','e','r'};
	int* p;
    char* q;
	p = iarr;
	for(i=0; i<6; i++)
	     { printf("(p+%d)=%x\t", i, p+i);
	       printf("*(p+%d)=%d\n", i, *(p+i));}
    puts("");
    q = carr;
    for(i=0; i<6; i++)
	     {printf("(q+%d)=%x\t", i, q+i);
		  printf("*(q+%d)=%c\n", i, *(q+i));}
}
