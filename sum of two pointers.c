
#include<stdio.h>
 #include<conio.h>
int main() {
   int *ptr1, *ptr2;
   int num;
	clrscr();
   printf("\nEnter two numbers : ");
   scanf("%d %d", ptr1, ptr2);
 
   num = *ptr1 + *ptr2;
 
   printf("Sum = %d", num);
   getch();
   return (0);
}