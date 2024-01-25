#include <stdio.h>
#define SIZE 5
void main()
{
	int i;
	int a[SIZE];
	void bubble(int[], int);
	printf("Please input 5 numbers:");
	for(i=0; i<SIZE; i++)
		scanf("%d", &a[i]);
	bubble(a, SIZE);
	printf("Sorted:");
	for(i=0; i<SIZE; i++)
		printf("%d\t", a[i]);
}
void bubble(int arr[], int size)
{
	int i, j, temp;
	for(i=0; i<size-1; i++)
		for(j=0; j<size-i-1 ; j++)
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
}

