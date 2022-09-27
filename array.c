#include<stdio.h>
int main()
{
    int value[5],i;
    for(i=1;i<=5;i++)
    {
        printf("enter the element %d\n",i);
        scanf("%d",&value[i]);
    }
    printf("\nthe entered elements are :");
    for(i=1;i<=5;i++)
    {
        printf("the entered elements are :%d\n",value[i]);
    }
    return 0;
}