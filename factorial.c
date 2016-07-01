 #include<stdio.h>
 #include<conio.h>
int main(){
  int i=1,f=1,num;
	clrscr();
  printf("Enter a number: ");
  scanf("%d",&num);

  while(i<=num){
      f=f*i;
      i++;
  }

  printf("Factorial of %d is: %d",num,f);
  getch();
  return 0;
}