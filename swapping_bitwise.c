#include<stdio.h>
#include<conio.h>
int main()
{
int x,y;
clrscr();
printf("\n enter the elements\n");
scanf("%d%d",&x,&y);
printf("\n before swapping x=%d,y=%d",x,y);
x=x^y;
y=y^x;
x=x^y;
printf("\n after swapping x=%d y=%d",x,y);
getch();
return0;
}