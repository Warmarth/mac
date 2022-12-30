#include <stdio.h>
int mul(int c, int d)
    {
        int a,b,mul;
        mul = (a*b);
        return mul;
    }
int main()
{
    /*ques 1*/
    int x,y,z;
    int *j,*k,*l;
    x=512;
    y=1024;
    z=2048;
    j=&x;
    k=&y;
    l=&z;

    printf("address %p content %d \n", &x,x);
    printf("address %p content %d \n", &y,y);
    printf("address %p content %d \n", &z,z);
    printf("address %p content %p value %d\n", &j,j,*j);
    printf("address %p content %p value %d\n", &k,k,*k);
    printf("address %p content %p value %d\n", &l,l,*l);
/*ques 2*/
    float flt_num, *flt;
    flt_num= 123.45;
    printf("address: %p   content %.2f\n",&flt_num, flt_num);
    flt=&flt_num;
    *flt = 543.21;
    printf("address: %p   content %.2f\n",flt, *flt);
/*ques 3*/
    char ch,*ch_c;
    ch='A';
    printf("address: %p   content %c\n",&ch, ch);
    ch_c=&ch;
    *ch_c='B';
    printf("address: %p   content %d\n",ch_c, *ch_c);

/*ques 4*/

    int i, t,*v,*q,*p;
    i=5;
    t=6;
    printf("address of i: %p   content of i: %d\n",&i, i);
    printf("address of t: %p   content of t: %d\n",&t, t);

    v=&i;
    q=&t;
    p=&i;
    printf("address of q: %p   content of q: %d\n",q, *q);
    printf("address of p: %p   content of p: %d\n",p, *p);
    printf("address of v: %p   content of v: %d\n",v, *v);
    *p = (*q) * (*v);
    printf("address of p: %p   content of p: %d\n",p, *p);
   
    printf("value of the variables: %d\n",i);





}