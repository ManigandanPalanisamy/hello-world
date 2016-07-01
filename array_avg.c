 #include <stdio.h>
#include <errno.h>

 int main(){
  int a[50],size,i,sum;
  float avg
	clrscr();
  printf("\nEnter the size of the array: ");
  scanf("%d",&size);
  printf("\nEnter %d elements in to the array: ", size);
  for(i=0;i<size;i++)
      scanf("%d",&a[i]);

  sum=0;
  for(i=0;i<size;i++)
  {
           sum+=a[i];
	}
	avg=sum/size
  
  printf("average of array element: %f",avg);
 
 
	getch();
  return 0;
}

