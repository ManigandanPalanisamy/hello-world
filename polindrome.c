
#include<stdio.h>
#include<conio.h>
int main(){
    int num,r,sum=0,temp;
	clrscr();
    printf("Enter a number: ");
    scanf("%d",&num);

    temp=num;
    while(num){
         r=num%10;
         num=num/10;
         sum=sum*10+r;
    }
    if(temp==sum)
         printf("%d is a palindrome",temp);
    else
         printf("%d is not a palindrome",temp);
	getch();
    return 0;
}