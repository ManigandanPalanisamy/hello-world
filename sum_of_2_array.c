#include<stdio.h>
 #include<conio.h>
 int i;
 int main()
 {
    int a[100],b[100],n, t;
	clrscr();
    void read(int x[],int size);
    int sum(int x[],int y[],int size);
    void display(int x[],int size);
    clrscr();
    printf("Enter how many value stored into array \n");
    scanf("%d",&n);
	printf("\nFirst Array...");
    read(a,n);
	printf("\nSecond Array...");
    read(b,n);
    t= sum(a,b,n);
    getch();
	return 0;
 }
 
 void read(int x[],int size)
 {
       printf("enter %d values of the list \n",size);
       for(i=0;i<size;i++)
	   scanf("%d", &x[i]);
 }
 
 int sum(int x[],int y[],int size)
 {
    int total =0;
    for(i=0;i<size;i++)
	{
	x[i]+=y[i];
	}
	printf("print data list is :\n");
   display(x,n);
 }
 void display(int x[],int size)
 {
    for(i=0;i<size;i++)
       printf("%5d", x[i]);
 }