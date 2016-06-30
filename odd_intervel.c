#include <stdio.h>
#include<conio.h>
int main()
{
    int i, n, m;
    clrscr();
    
    printf("Print odd numbers start and end values: ");
    scanf("%d%d", &n,&m);

    printf("All odd numbers from %d to %d are: \n", n,m);

    
    for(i=n; i<=m; i++)
    {
       
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
    }
	getch();
    return 0;
}