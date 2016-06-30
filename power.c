#include <stdio.h>
#include<conio.h>
int main()
{
    int base, exponent;

    long long result = 1;
	clrscr();
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: 4");
    scanf("%d", &exponent);

    while (exponent != 0)
    {
        result *= base;
        --exponent;
    }

    printf("Answer = %lld", result);
	getch();
    return 0;
}