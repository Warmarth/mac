#include <stdio.h>
int main ()
{
    int i,j;
    i = 0;
    j= 1;
    while (i <= 8)
    {
        printf("%d + %d = %d\n", i, j, i+j);
        i++ , j++;
    }
    return 0; 
}