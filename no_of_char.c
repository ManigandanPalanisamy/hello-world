 #include<stdio.h>
#include<conio.h>
int main()
{
 int i;
 int count_char=0;
 char str[20];
 clrscr();
 printf("Enter string : ");
 gets(str);
 for(i=0; str[i]!=NULL; i++)
 {
   count_char++;
    
 }
 printf("\nNumber of characters in string : %d",count_char);
 
 getch();
 return 0;
}