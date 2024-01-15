#include <stdio.h>
void main()
{	int i;
	char a[]="Shinder";
	char b[]= {'S','h','i','n','d','e','r'};
	char *p;
	/*p=b;
	*(p+7)='h';
	*(p+8)='i';
	*(p+9)='j';*/
	printf("sizeof(a)=%d\n", sizeof(a));
	for(i=0; i<sizeof(a); i++)
		printf("%d\t", a[i]);
	printf("\n=====================================");
	printf("\nsizeof(b)=%d\n", sizeof(b));
	for(i=0; i<sizeof(b); i++)
		printf("%d\t", b[i]);
	printf("\na=%s\n", a);
	printf("b=%s\n", b);
}

