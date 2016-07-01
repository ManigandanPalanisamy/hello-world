 #include<stdio.h>
 #include<conio.h>
int main(){
    int a,b,temp;
	clrscr();
    printf("Enter any two integers: ");
    scanf("%d%d",&a,&b);
    printf("Before swapping: a = %d, b=%d",a,b);

    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping: a = %d, b=%d",a,b);
	getch();
    return 0;
}