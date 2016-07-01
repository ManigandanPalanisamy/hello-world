#include<stdio.h>
#include<conio.h>
int main()
{
int i ;
oddsum=0;                                  
evensum=0;
clrscr();

for( i=1 ; i<=15 ; i++ )
{
if(i%2 ==0)
{
evensum=evensum+ i;
}
}
for( i=15 ; i<=45 ; i++ )
{
if(i%2 !=0)
{
oddsum=oddsum+i;
}
}
printf(" Sum of Odd Numbers = %d" , oddsum);
printf(" Sum of Even Numbers = %d" , evensum);
getch();
return 0;
}