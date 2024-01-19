#include <stdio.h>
int main()
{
	int a, b, c, d;
	printf("請輸入 a,b,c 之值：");
	scanf("%d %d %d", &a, &b, &c);
	d = b * b - 4 * a * c;
	if (d > 0)
	{
		printf("判別式 d 的值 = %d\n", d);
		printf("方程式有兩個不同的實根");
	}
	return 0;
}

