
#include <stdio.h>
#include<conio.h>
int main()
{
      char str [81];
	  
      int nletter, ndigit,  nother; 
      int i;
      clrscr();
      printf("Enter a line of text:\n");
      gets(str);
      
      nletter = ndigit = nalpha = nother = 0; 
      i = 0;
      while (str[i] != '\0')
          {
              char ch= str[i];
              if (ch>= 'A' && ch<= 'Z' || ch>= 'a' && ch<= 'z')
              nletter++;
              else if (ch>= '0' && ch<= '9')
                       ndigit++;
              
              else nother++;
                       i++;
          }
             
              printf("Letters: %d \tdigit : %d", nletter, ndigit);
              printf(" Digits : talpha numeric : %d\n",nother);
              getch();
			  return 0;
}