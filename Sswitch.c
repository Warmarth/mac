#include <stdio.h>

int calu( int x, int y)
{
    int D;
    D = getchar();
    
    
    if ((x == 0) && (y == 0))
    return -1;

    else
    switch (D)
    {
        case'-': D = x - y;
        break;
        case'+': D = y + x;
        break;
        case'*': D = y * x;
        break;
        case'/': D = x / y;
        break;
        case'%': D = y % x;
        break;    
        
    }
return D;
}


int main()
{
    int g,h, result;
    g = 40;
    h = 7;
    result = calu(g, h);
    printf("%d", result);
}