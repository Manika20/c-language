#include<stdio.h>
int main()
{
    int value[5],i,s=0;
    float t;
    for(i=1;i<=5;i++)
    {
        printf("enter the element %d\n",i);
        scanf("%d",&value[i]);
    }
    printf("\nthe entered elements are :");
    for(i=1;i<=5;i++)
    {
        s=s+value[i];
        //printf("the entered elements are :%d\n",value[i]);
    }
    t=(s*100)/5;
    printf("the average is %f",t);
    return 0;
}
    