 #include<stdio.h>
 #include<Mconio.h>
int main(){
    int year;
	clrscr();
    printf("Enter any year: ");
    scanf("%d",&year);

    if(((year%4==0)&&(year%100!=0))||(year%400==0))
         printf("leap year");
    else
         printf("not a leap year");
  	getch();
    return 0;
}
