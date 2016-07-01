#include <stdio.h>
#include<conio.h>
#define MAX_SIZE 100 


int main()
{
    char string[MAX_SIZE];
    int  others, i;

    others = i = 0;
	clrscr();
	printf("Enter any string : ");
    gets(string);	
    while(string[i]!='\0')
    {
        if((string[i]>='a' && string[i]<='z') || (string[i]>='A' && string[i]<='Z'))
        {
        }
        else if(string[i]>='0' && string[i]<='9')
        {
        }
        
         else{   others++;
        }
	
	}
        i++;
    }

    
    printf("Special characters = %d\n", others);
	getch();
    return 0;
}