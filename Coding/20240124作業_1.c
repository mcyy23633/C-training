#include<stdio.h>
#define SIZE 13
main()
{
	int i, j, k, temp;
	int d;
	int a[SIZE];
	int age, sex;
	
	printf("�п�J13�ռƦr:");
	    for (i = 0; i < SIZE; i++)
        scanf("%d", &a[i]);
        
    printf("��J�z�n���ƧǪk(0)�Ƨ�(1)��w");
	scanf("%d", &sex);
		if(sex)
			printf("�`�ǱƧǪk");
		else
			printf("��w�ƧǪk");

}
