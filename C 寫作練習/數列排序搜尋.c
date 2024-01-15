#include <stdio.h>
#define SIZE 10 
void main()
{	int i, j, k,t,find, temp,sel=0;
	int data[SIZE];
	int l=0, r=SIZE, m;
	printf("Please input 10 numbers:");
	for(i=0; i<SIZE; i++)
		scanf(" %d", &data[i]);
	printf("Data:");
	for(i=0; i<SIZE; i++)
		printf("%4d", data[i]);
	printf("\n請選排序法 1)選擇  2)氣泡 :");	
	scanf(" %d", &sel);
	if (sel == 1) 
	    for(i=0; i<SIZE-1; i++)
		    for(j=i+1; j<SIZE ; j++)
		       {   if(data[i]>data[j])
			          {temp = data[i];
			           data[i] = data[j];
			           data[j] = temp;
			           printf("Change\t"); }
		            else
			           printf("\t");
		            for(k=0; k<SIZE; k++)
			            printf("%4d", data[k]);
		            printf("\n");
		       }
	else 
	   for(i=0; i<SIZE-1; i++)
		    for(j=0; j<SIZE-i-1 ; j++)
		        { if(data[j]>data[j+1])
				     {temp = data[j];
				      data[j] = data[j+1];
				      data[j+1] = temp;
				      printf("Change\t");}
			      else
				     printf("\t");
			    for(k=0; k<SIZE; k++)
			        printf("%4d", data[k]);
			    printf("\n");
        	}
    printf("\ndata:");    	
    for(i=0; i<SIZE; i++)
		printf("%4d", data[i]);

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

