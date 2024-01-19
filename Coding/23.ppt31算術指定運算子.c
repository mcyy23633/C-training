#include <stdio.h>
main()
{
	int A;
	float B ;
	A=5, A+=2;
	printf("A+=2\tA=%d\n", A);
	A=5, A-=2;
	printf("A-=2\tA=%d\n", A);
	A=5, A*=2;
	printf("A*=2\tA=%d\n", A);
	B=5, B/=2;
	printf("B/=2\tB=%.1f\n", B);
	A=5, A%=2;
	printf("A%%=2\tA=%d\n", A);
}

