#include<stdio.h>
int circle(r)
{
    printf("the diameter of circle is %d",2*r);
    printf("\nthe circumfrence of circle is %f",2*3.14*r);
    printf("\n the area of circle is %f",3.14*r*r);
}
main() {

    int  r;
    printf("enter the value of r");
    scanf("%d",&r);
    circle(r);
    return 0;
}