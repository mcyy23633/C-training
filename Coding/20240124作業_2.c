#include <stdio.h>
#define SIZE 13

int main()
{
	int i, j, k, temp;
	int a[SIZE];

	printf("�п�J13�ӼƦr�G");
	for (i = 0; i < SIZE; i++)
		scanf("%d", &a[i]);

	char c;
	printf("�п�J(a)��ܱƧǪk (b)��w�ƧǪk�G");
	scanf(" %c", &c);

	switch (c)
	{
		case 'a':
			printf("��ܱƧǪk\n");
			for(i=0; i<SIZE-1; i++)
				for(j=i+1; j<SIZE ; j++)
				{
					if(a[i]>a[j])
					{
						temp = a[i];
						a[i] = a[j];
						a[j] = temp;
						printf("�洫\t");
					}
					else
						printf("\t");
					for(k=0; k<SIZE; k++)
						printf("%d\t", a[k]);
					printf("\n");
				}
			break;

		case 'b':
			printf("��w�ƧǪk\n");
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
			break;

		default:
			printf("�Э��s��J�@��\n");
			break;
	}
	int t=0, find;
	int l=0, r=SIZE, m;
	printf("Data:");
	for(i=0; i<SIZE; i++)
		printf("%4d", a[i]);
	printf("\nInput a number to search:");
	scanf("%d", &find);
	for(i=0; i<SIZE; i++)
		printf("%-4d", a[i]);
	printf("\n");
	while(1)
	{
		m=(l+r)/2;
		t++;
		for(i=0; i<m; i++)
			printf("    ");
		if(a[m]==find)
		{
			printf("O\nSearch %d time(s).", t);
			break;
		}
		else
		{
			if(m==l)
			{
				printf("Can not find %d.", find);
				break;
			}
			if  (a[m]<find)
				l=m;
			else
				r=m;
			printf("X\n");
		}
	}

	return 0;
}

