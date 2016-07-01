#include <stdio.h>
#include<conio.h>
int main()
{
    int n1, n2, minMultiple;
	clrscr();
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    
    minMultiple = (n1>n2) ? n1 : n2;

    
    while(1)
    {
        if( minMultiple%n1==0 && minMultiple%n2==0 )
        {
            printf("The LCM of %d and %d is %d.", n1, n2,minMultiple);
            break;
        }
        ++minMultiple;
    }
	getch();
    return 0;
