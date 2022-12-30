#include <stdio.h>
#include <time.h>

int main()
{
    int  d ,h , m , s;
    printf("enter the your numbers in seconds:  ");
    scanf("%d", &s);
    
    h = (s / 3600);
    m = (s -(h * 3600))/60;
    s = (s -(h * 3600)-(m * 60));
    printf("hrs:mins:secs  %d: %d: %d", h , m, s);
    return 0;
}

