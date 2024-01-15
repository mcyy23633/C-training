#include <stdio.h>
main()
{
     int arr[]={10, 20, 30, 40, 50, 60};
     int  i;
     printf("arr=%x\n", arr);
     for (i=0;i<6;i++)
             {
	      printf("&arr[%d]=%x,*(&arr[%d])=%d \t",  i, &arr[i],i,*(&arr[i]));
	      printf("arr+%d=%x, *(arr+%d)=%d\n", i ,arr+i,i, *(arr+i));
	     }
}
