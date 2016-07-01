#include(stdio.h)
#include(conio.h)
#include(ctype.h)
int main( )
{
char ch;
int line=0;
clrscr( );
printf("Enter the required no. of lines:\n");
while((ch=getchar( ))!=EOF)
{
if(ch==10) { line++; }
}
printf("\nNumber of Lines : %d", line+1);

getch( );
return 0;
}
