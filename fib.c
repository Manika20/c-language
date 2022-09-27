#include<stdio.h>
int fib(int n)
{
    int x;
    if(n==1)
    {
        return 1;
    }
    else if (n==0)
    {
        return 0;
    }
    x=fib(n-1)+fib(n-2);
    printf("%d ",x);
}
int main()
{
    //int n=6;
    fib(6);
    return 0;
}