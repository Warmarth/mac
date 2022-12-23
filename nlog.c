#include <stdio.h>
int main()
{
    int f,d;
    f = 5;
    d = 2;

    printf(" >> will yield %d\n", f >> d);
    printf(" << will yield %d\n", d << f);
    printf(" ~ will yield %d\n", ~ (f));
    printf(" %d\n",d >> f && d & f || d | f );
    return 0;
}