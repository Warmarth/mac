#include <stdio.h>
int main()
{
    int a, size;
    float b ;
    char c;
    double d ;
    
    a = sizeof(a);
    b = sizeof(b);
    size = sizeof(c);
    d = sizeof(d);


    printf("The size OF integer is %d byte\n", a);
    printf("The size OF float is %.f byte\n",  b );
    printf("The size OF character is %d byte\n", size);
    printf("The size 0F double is %d byte\n", sizeof d);

    return 0;
}