#include <stdio.h>

int main()
{
	int i, j;
	int a[3][4];

	// 初始化二維陣列
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			a[i][j] = i * 10 + j;
		}
	}

	// 顯示二維陣列元素的地址和值
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("a=>%p, a[%d]=>%p, &a[%d][%d]=%p, a[%d][%d]=%d\n",
			       (void *)&a, i, (void *)a[i], i, j, (void *)&a[i][j], i, j, a[i][j]);
		}
		printf("\n");
	}

	// 顯示指向每行第一個元素的指標
	for (i = 0; i < 3; i++)
	{
		printf("*(a+%d)=%p, a[%d]=%p\n", i, (void *)*(a + i), i, (void *)a[i]);
	}

	return 0;
}

