#include <stdio.h>
int main()
{
    int x;
    for (x = ' '; (x != 'q' ? (1) : (0)); x++ )
    {
        x = getchar();
        putchar(x);
    }
}