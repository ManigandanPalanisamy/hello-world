#include<stdio.h>
#include<conio.h>
int main()
{
 int i;
 clrscr();
 printf("ASCII table & its equivalent values with numbering: \n");
 for(i=1; i<=255; i++)
   printf("\nValue: %d -> ASCII character: %c",i,i);
 getch();
 return 0;
}