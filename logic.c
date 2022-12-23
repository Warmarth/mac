#include <stdio.h>
int main()
{
    int f,d;
    f = 3;
    d = 2;

    printf(" ^ will yield %d\n", d ^ f);
    printf(" & will yield %d\n", d & f);
    printf(" | will yield %d\n", d | f);
    printf(" %d\n",d ^ f || d & f && d | f );
    return 0;
}