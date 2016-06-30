#include<stdio.h>
#include<conio.h>
int main()
{
	int num1;
	clrscr();
	printf("Enter Value:\n");
	scanf("%d",&num1);
	if(num1>0)
	printf("Positive");
	else if(num1<0)
	printf("Negative");
	else
	printf("Zero");
	getch();
	return 0;
}