#include <stdio.h>
#include<conio.h>
int main()
{
    int n, sum, temp, reminder;
    sum = 0;
	clrscr();
    printf("Enter a number to check Armstrong Number : ");
    scanf("%d",&n);

    temp = n;
    while(temp!=0) {
        reminder = temp%10;
        sum = sum + reminder*reminder*reminder;
        temp = temp / 10;
    }
    if(n==sum) printf("%d is an Armstrong Number.",n);
    else printf("%d is not an Armstrong Number.",n);
	getch();
    return 0;
}