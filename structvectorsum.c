#include<stdio.h>
struct vector
{
    int x;
    int y;
};
struct vector addvectors(struct vector a, struct vector b)
{
struct vector k;
k.x=a.x+b.x;
k.y=a.y+b.y;
return k;
}
int main()
{
    
    struct vector a,b,sum;
    a.x=5;
    a.y=7;
    b.x=-7;
    b.y=10;
    sum = addvectors(a,b);
    printf("the x component is %d and y comoponent is %d ",sum.x,sum.y);
    return 0;
}