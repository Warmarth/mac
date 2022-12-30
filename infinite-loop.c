#include <stdio.h>

int main() 
{
    int c=1;
    int i;
        for(i=2; i<10; i++){
            if(i%3 == 0)
                continue;
            c +=i;
}
    printf("%d\n",c);
    return 0;
}