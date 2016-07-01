#include <stdio.h>
#include<conio.h>
int main()
{
    int n, i, range;
	clrscr();
    printf("Enter an integer, which you want to generate multiplication table of: ");
    scanf("%d",&n);

    printf("Enter the range of the multiplication table: ");
    scanf("%d", &range);

    for(i=1; i <= range; ++i)
    {
        printf("%d * %d = %d \n", i, n, n*i);
    }
	getch();
    return 0;
}