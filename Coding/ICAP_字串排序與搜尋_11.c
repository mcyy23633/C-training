#include <stdio.h>
#include <string.h>

#define SIZE 8
#define LEN 60

// 函式宣告
void strbubble(char[][LEN], int);
void strselect(char[][LEN], int);
void strchange(char[], char[]);

int main()
{
	int i, sort, l = 0, r = SIZE, m, t = 0;
	char s[SIZE][LEN];
	char str[60];

	// 輸入8個單字
	puts("輸入 8 個單字:");
	for (i = 0; i < SIZE; i++)
		gets(s[i]);

	// 選擇排序或氣泡排序
	printf("請選擇 1)選擇  2)氣泡 排序法:");
	scanf("%d", &sort);
	if (sort == 1)
	{
		strselect(s, SIZE);
		puts(">>-- 使用 選擇 排序法後:");
	}
	else
	{
		strbubble(s, SIZE);
		puts(">>-- 使用 氣泡 排序法後:");
	}

	// 輸出排序後的單字
	for (i = 0; i < SIZE; i++)
		puts(s[i]);

	// 輸出字串列表
	printf("字串列表:\n");
	for (i = 0; i < SIZE; i++)
		printf("%s\t", s[i]);
	printf("\n\n請輸入搜收尋字串:");
	scanf("%s", str);

	// 再次輸出字串列表
	for (i = 0; i < SIZE; i++)
		printf("%s\t", s[i]);
	printf("\n");

	// 字串二分搜尋
	while (1)
	{
		m = (l + r) / 2;
		t++;
		for (i = 0; i < m; i++)
			printf("\t");
		if (strcmp(s[m], str) == 0)
		{
			printf("O\n程式搜尋所跑的步驟數 %d 次", t);
			break;
		}
		else
		{
			if (m == l)
			{
				printf("找不到所搜尋的字串 %s.", str);
				break;
			}
			if (strcmp(str, s[m]) > 0)
				l = m;
			else
				r = m;
			printf("X\n");
		}
	}

	return 0;
}

// 選擇排序
void strselect(char sa[][LEN], int size)
{
	int i, j;
	for (i = 0; i < size - 1; i++)
		for (j = i + 1; j < size; j++)
			if (strcmp(sa[i], sa[j]) > 0)
				strchange(sa[i], sa[j]);
}

// 氣泡排序
void strbubble(char sa[][LEN], int size)
{
	int i, j;
	for (i = 0; i < size - 1; i++)
		for (j = 0; j < size - i - 1; j++)
			if (strcmp(sa[j], sa[j + 1]) > 0)
				strchange(sa[j], sa[j + 1]);
}

// 交換字串
void strchange(char a[], char b[])
{
	char temp[LEN];
	strcpy(temp, a);
	strcpy(a, b);
	strcpy(b, temp);
}

