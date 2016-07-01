#include<stdio.h>
#include<conio.h>
int hcf(int,int); 
int main()
{
int a,b,gcd;
clrscr();
printf("Enter 2 Nos. to calculate HCF: \n");
scanf("%d%d",&a,&b);
gcd=hcf(a,b);
printf("GCD / HCF is : %d",gcd);
getch();
return 0;
}
int hcf(int x,int y) 
{
if (y!=0)
return hcf(y,x%y);
else
return x;
}