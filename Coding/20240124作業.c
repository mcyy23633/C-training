#include <stdio.h>
#define SIZE 13

int main()
{
	int i, j, k, temp;
	int a[SIZE];

	printf("�п�J13�ӼƦr�G");
	for (i = 0; i < SIZE; i++)
		scanf("%d", &a[i]);



	return 0;
	char c;
	printf("�п�J(a)���(b)��w");
	scanf("%c",&c);
	switch (c)
	{
		case 'a':
			printf("���");
			int i,j,find;
			int data[SIZE]= {48,82,75,22,18,73,36};
			printf("Data:");
			for(i=0; i<SIZE; i++)
				printf("%4d",data[i]);
			printf("\nInnput a number to search:");
			scanf("%d",&find);
			for(i=0; i<SIZE; i++)
			{
				for(j=0; j<i; j++)printf("\t");
				if(find == data[i])
				{
					printf("O\nSearch %d time(s)",i+1);
					return;
				}
				else
					printf("X\n");
				break;
			case 'b':
				printf("��w");
				break;
				for (i = 0; i < SIZE - 1; i++)
					for (j = 0; j < SIZE - i - 1; j++)
					{
						if (a[j] > a[j + 1])
						{
							temp = a[j];
							a[j] = a[j + 1];
							a[j + 1] = temp;
							printf("�洫\t");
						}
						else
							printf("\t");

						for (k = 0; k < SIZE; k++)
							printf("%d\t", a[k]);

						printf("\n");
					}
			default:
				printf("�Э��s��J�@��");
			}
	}

