#include <stdio.h>
#define SIZE 15 
void main()
{	int i,s,j,k, t=0,temp, find;
	int data[SIZE];
	int l=0, r=SIZE, m;
	void bubble(int [], int);
	void select(int [], int);
	printf("Please input 15 numbers:");
	for(i=0; i<SIZE; i++)
		scanf(" %d", &data[i]);
	printf("Data:");
	for(i=0; i<SIZE; i++)
		printf("%4d", data[i]);
	printf("\n\n請選 排序 法  1)select   2)bubble :");
	scanf("%d",&s);
	if (s==1)
	       { select(data, SIZE);
	         printf("\n資料經 選擇 排序後:");
		   }
	   else
           { bubble(data, SIZE);
	         printf("\n資料經 氣泡 排序後:");
		   }	    
	for(i=0; i<SIZE; i++)
		printf("%4d", data[i]);
	printf("\n\n請輸入欲搜尋的數目:");
	scanf("%d", &find);
	for(i=0; i<SIZE; i++)
		printf("%-4d", data[i]);
	printf("\n");
    while(1) {m=(l+r)/2;
		 t++;
		 for(i=0; i<m; i++)
			printf("    ");
   		 if(data[m]==find) {
			printf("O\nSearch %d time(s).", t);
			break; }
		else {	if(m==l) {
				printf("Can not find %d.", find);
				break; }
		          if  (data[m]<find)
			      l=m;
		          else
			      r=m;
		          printf("X\n");
		         }
	     }
}
void bubble(int arr[], int size)
{	int i, j, temp;
	for(i=0; i<size-1; i++)
		for(j=0; j<size-i-1 ; j++)
			if(arr[j]>arr[j+1])
			{	temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
}
void select(int arr[], int size)
{   int i, j, temp;
    for(i=0; i<size-1; i++)
		for(j=i+1; j<size ; j++)
		    if (arr[i]>arr[j])
			    { temp = arr[i];
			      arr[i] = arr[j];
			      arr[j] = temp;
                 }
}

