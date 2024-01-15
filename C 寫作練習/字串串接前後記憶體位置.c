#include <stdio.h>
#include <string.h>
void main()
{
	char str1[]  ="I Like";
	char str2[20]="I Like";
	char str3[20]="I Like";
	char str4[]=" Joan!";
	printf("sizeof(str1)=%2d\n", sizeof(str1));
	printf("strlen(str1)=%2d, sizeof(str1)=%2d, str1=%s, str1=%x\n",strlen(str1),sizeof(str1),str1,str1);
	printf("strlen(str2)=%2d, sizeof(str2)=%2d, str2=%s, str2=%x\n",strlen(str2),sizeof(str2),str2,str2);
	printf("strlen(str3)=%2d, sizeof(str3)=%2d, str3=%s, str3=%x\n",strlen(str3),sizeof(str3),str3,str3);
	printf("strlen(str4)=%2d, sizeof(str4)=%2d, str4=%s, str4=%x\n",strlen(str4),sizeof(str4),str4,str4);
    printf("sizeof(str1)=%2d\n", sizeof(str1));
    printf("\n觀察字串 串接前後所在記憶體位置有無改變 !!\n");
	strcat(str1, str4);
	strcat(str2, str4);
	strcat(str3, str4);
	printf("\nsizeof(str1)=%2d\n", sizeof(str1));
	printf("strlen(str1)=%2d, sizeof(str1)=%2d, str1=%s, str1=%x\n",strlen(str1),sizeof(str1),str1,str1);
	printf("strlen(str2)=%2d, sizeof(str2)=%2d, str2=%s, str2=%x\n",strlen(str2),sizeof(str2),str2,str2);
	printf("strlen(str3)=%2d, sizeof(str3)=%2d, str3=%s, str3=%x\n",strlen(str3),sizeof(str3),str3,str3);
	printf("strlen(str4)=%2d, sizeof(str4)=%2d, str4=%s, str4=%x\n",strlen(str4),sizeof(str4),str4,str4);
}
