#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    i = 1;
    while ( i 0 )
    {
        sum += i;
        ++i;
    }

    printf("Sum = %d",sum);
	getch();
    return 0;
}
