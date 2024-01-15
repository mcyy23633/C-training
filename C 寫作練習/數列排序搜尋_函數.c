#include <stdio.h>
#define SIZE 10 
void main()
{	int i, j, k,t=0,find, temp,sel;
	int data[SIZE];
	int l=0, r=SIZE, m;
	void bubble(int[], int);
	void select(int[], int);
	printf("Please input 10 numbers:");
	for(i=0; i<SIZE; i++)
		scanf(" %d", &data[i]);
	printf("Data:");
	for(i=0; i<SIZE; i++)
		printf("%4d", data[i]);
	printf("\n請選排序法 1)選擇  2)氣泡 :");	
	scanf("%d", &sel);
	if (sel == 1) 
	    {select(data,SIZE);
	     printf("\n\"選擇\"排序後的數列:");} 
	else 
	    {bubble(data,SIZE);
	     printf("\n\"氣泡\"排序後的數列:");}
    printf("\ndata:");    	
    for(i=0; i<SIZE; i++)
		printf("%4d", data[i]);
	printf("\n=============================================\n");
	printf("\n請輸入想要搜尋的數目字:");
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
			break;
		}
		else {	if(m==l) {
				printf("Can not find %d.", find);
				break; }
			if(data[m]<find)
				l=m;
			else
				r=m;
			printf("X\n");
		}
	}
}
void select(int arr[], int size)
   {
	 int i,j,temp; 
	for(i=0; i<SIZE-1; i++)
		for(j=i+1; j<SIZE ; j++)
		    if(arr[i]>arr[j])
			    {temp = arr[i];
			     arr[i] = arr[j];
			     arr[j] = temp;}
			        
}
void bubble(int arr[], int size)
{	int i, j, temp;
	for(i=0; i<size-1; i++)
		for(j=0; j<size-i-1 ; j++)
			if(arr[j]>arr[j+1])
			  {	temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;}
}

