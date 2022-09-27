#include<stdio.h>
int main()
{
    int i,s=1;
    for(i=1;i<=-9;i++)
    {
        s=i*s;
    }
    printf("%d",s);
    return 0;
}