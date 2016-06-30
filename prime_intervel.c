 #include<stdio.h>
#include<conio.h>
int main(){

    int num,i,count,n,m;
	clrscr();
    printf("Enter min,max range: ");
    scanf("%d%d",&n,&m);

    for(num = 1;num<=n;num++){

         count = 0;

         for(i=2;i<=num/2;i++){
             if(num%i==0){
                 count++;
                 break;
             }
        }
        
         if(count==0 && num!= 1)
             printf("%d ",num);
    }
  getch();
   return 0;
}