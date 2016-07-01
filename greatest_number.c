#include <stdio.h>
#include<conio.h>
int main()
{
	int num1,num2,num3;
	clrscr();
	printf("Enter the three numbers : ");
	scanf("%d%d%d",&num1,&num2,&num3);
	if((num1>num2)&&(num1>num3))
	printf("Biggest number is %d ",num1);
	else if(num2>num3)
	printf("Biggest number is %d ",num2);
	else
	printf("Biggest number is %d ",num3);
	getch();
	return 0;
}
	