#include<stdio.h>
#define SIZE 13
main()
{
	int i, j, k, temp;
	int d;
	int a[SIZE];
	int age, sex;
	
	printf("請輸入13組數字:");
	    for (i = 0; i < SIZE; i++)
        scanf("%d", &a[i]);
        
    printf("輸入您要的排序法(0)排序(1)氣泡");
	scanf("%d", &sex);
		if(sex)
			printf("循序排序法");
		else
			printf("氣泡排序法");

}
