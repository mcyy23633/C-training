#include <stdio.h>
main()
{
	char c1, c2, c3;
	int i1, i2, i3;
	float f1, f2, f3;
	c1='A', c2=1234, c3=9.87E10 ;
	printf("<%c>\t<%c>\t<%c>\n", c1, c2, c3);
	i1='A', i2=1234, i3=9.87E10 ;
	printf("<%d>\t<%d>\t<%d>\n", i1, i2, i3);
	f1='A', f2=1234 ,f3=9.87E10;
	printf("<%f>\t<%f>\t<%f>\n", f1, f2, f3);
}

