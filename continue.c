#include<stdio.h>
int main()
{
    int i=0,j=0;
    while(i<10)
    {
        if(i!=5)
        {
            continue ; //would take it to condition again.
        }
        else
        {
            printf("%d",i);
        }
        i++;

    }
    return 0;
}