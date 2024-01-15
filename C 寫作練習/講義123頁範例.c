#include <stdio.h>
main()
{	int i,j;
	int  arr[]={65537, 65538, 65539, 257, 50, 60};
	int *p;
	char *q;

	p=arr;
	q=(char*)arr;
	for(i=0; i<6; i++)
	{
		printf("*(p+%d)=%d", i, *(p+i));
	  for(j=0; j<4; j++)	
		printf("\t*(q+%d)=%d\n\t", j, *(q+4*i+j));
	  printf("\n");
	}
}
