#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2;
	clrscr();
	printf("Enter the Checking Number : ");
	scanf("%d",&num1);
	num2=num1/2;
	if((num2*2)==num1)
	printf("Even");
	else
	printf("Odd");
	getch();
	return 0;
}