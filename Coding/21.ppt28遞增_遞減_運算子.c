#include <stdio.h>
main()
{
	int i, j;
	i=6, j=++i;
	printf("j=++i \t i=%d \t j=%d\n",i,j);
	i=6, j=i++;
	printf("j=i++ \t i=%d \t j=%d\n",i,j);
	i=6, j=--i;
	printf("j=--i \t i=%d\t  j=%d\n",i,j);
	i=6, j=i--;
	printf("j=i-- \t i=%d\t  j=%d\n",i,j);
}

