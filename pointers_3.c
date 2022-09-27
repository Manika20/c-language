#include<stdio.h>
int add( int a , int b, int *p, float *q)
{
*p= a+b;
*q= (float)(a+b)/2;
}
int main()
{
    int a,b, p;
    float q;//now p,q ko adress diya so inke *mai value store hogi.
    a=7;
    b=2;
    add(a,b,&p,&q);
    printf(" sum and average is %d and %f " ,p,q);
    return 0;

}