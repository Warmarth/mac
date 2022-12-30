#include <stdio.h>
#include <math.h>
// float BI(float h)
// {
//     if (h == 0)
//     return -1;
    
//     else
//     while (h <= 5)
//     {
//         h++;
//     }
//     return h;
// }

// float main()
// {
//     float re, t;
//     t = 3;
//     re = BI(t);
//     printf("BI %f", re);
//     return 0;
// }


// int main ()
// {
//     double q;
//     q = 0;
//     while (q != 100)
//     {
//         if ( q == 10 )
//         printf("power %2.2f", pow( q, 2));
//         q++;
//     }
//     return 0;
// }
// int main ()
// {
//     int q;
//     q = 0;
//     while (q != 100)
//     {
//         if ((q%3== 0) && (q%5 == 0))
//         printf("factors of 3 and 5:%d\n",q);
//         q++;
//     }
//     return 0;
// }
// int main ()
// {
//     int q;
//     q = 0;
//     while (q <= 10)
//     {
//     if (q%2 == 0)
//         printf("is an even no:%i\n", q);
//     else
//         printf("%d \n", q);
//     q++;
//     }
//     return 0;
// }

int main ()
{
    int q;
    q = 0;
    while (q <= 10)
    {
        if (q%4 == 0)
            if (q%2 == 0)
                printf("is an even no:%i\n", q);
            else
                printf("%d \n", q);
        else if (q == 4)
            printf("IT WORKED");
            
        else 
            printf("%i\n", q);
    q++;
    }
    
    return 0;
}