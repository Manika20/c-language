#include<stdio.h>
int main()
{
    int i,*p,j,*q,c,d;
    i=4;
    j=7;
    p=&i;
    q=&j;
    //printf("%d",p);
    //p++; //addition of a number to pointer inc by 4 bytes.
    //printf("\n%d",p); //value increased by 4.
    c=*p+*q;
    printf("\naddition %d",c); 
    
    //int i,*p,*q;
    //p=&i;
    //q=&i;
    //printf("%d %d",p,q);

    return 0;
}