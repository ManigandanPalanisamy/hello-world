#include<stdio.h>
#include<conio.h>
#define bool int


bool isPowerOfTwo(int n)
{
  if (n == 0)
    return 0;
  while (n != 1)
  {
    if (n%2 != 0)
      return 0;
    n = n/2;
  }
  return 1;
}

/*Driver program to test above function*/
int main()
{
	int a;
	printf("Enter the number : ");
	scanf(%d",&a);
  isPowerOfTwo(a)? printf("Yes\n"): printf("No\n");
	getch();
  return 0;
}