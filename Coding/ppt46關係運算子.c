#include <stdio.h>
int main()
{
	int a, b, c, d;
	printf("�п�J a,b,c ���ȡG");
	scanf("%d %d %d", &a, &b, &c);
	d = b * b - 4 * a * c;
	if (d > 0)
	{
		printf("�P�O�� d ���� = %d\n", d);
		printf("��{������Ӥ��P�����");
	}
	return 0;
}

