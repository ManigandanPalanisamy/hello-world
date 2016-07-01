 #include <stdio.h>
#include <errno.h>
#include<conio.h>
#define MIN 0
#define MAX 9 

int main()
{
    int n, i;
	clrscr();
    while (1) {
        errno = 0;
        printf("Enter a number (%d-%d) :", MIN, MAX);

        if (scanf("%d", &n) != 1) {
            printf("Error!\n");
            break;
        } 

        if (n >= MIN && n <= MAX) {
            printf("Okay\n");
        } else {
            printf("Error!\n");
            break;
        }
    }
	getch();
    return 0;
}

