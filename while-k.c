#include <stdio.h>
int main ()
{
    int i;
    i = ' ';
   
    while (i != 'k')
    {
        i = getchar();
        putchar(i);
    }
    return 0; 
}