#include <stdio.h>
void main()
{	char *s1=¡§fun¡¨;
	char *s2="fun¡¨;
	char *s3="fun";
	printf("s1=%x\ts2=%x\ts3=%x\n", s1, s2, s3);
	printf("Input a string:");
	scanf("%s", s1);
	s3="funny";
	printf("s1=%x\ts2=%x\ts3=%x\n", s1, s2, s3);
	printf("s1=%s\n", s1);
	printf("s2=%s\n", s2);
	printf("s3=%s\n", s3);
}

