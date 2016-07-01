#include <stdio.h>
#include<conio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, next = 0;
	clrscr();
    printf("Enter the number of terms: ");
    scanf("%d",&n);

    
    printf("Fibonacci Series: %d, %d, ", t1, t2);

   
    for (i=3; i <= n; ++i)
    {
        next = t1 + t2;
        t1 = t2;
        t2 = next;
        printf("%d, ",next);
    }
	getch();
    return 0;
}
