#include <stdio.h>

int main()
{
	int i, j;
	int a[3][4];

	// ��l�ƤG���}�C
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			a[i][j] = i * 10 + j;
		}
	}

	// ��ܤG���}�C�������a�}�M��
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("a=>%p, a[%d]=>%p, &a[%d][%d]=%p, a[%d][%d]=%d\n",
			       (void *)&a, i, (void *)a[i], i, j, (void *)&a[i][j], i, j, a[i][j]);
		}
		printf("\n");
	}

	// ��ܫ��V�C��Ĥ@�Ӥ���������
	for (i = 0; i < 3; i++)
	{
		printf("*(a+%d)=%p, a[%d]=%p\n", i, (void *)*(a + i), i, (void *)a[i]);
	}

	return 0;
}

