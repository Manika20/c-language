#include<stdio.h>
int Hnaoitower(int n,int a,int b,int c)
{
    if(n>0)
    {
        Hnaoitower(n-1 , a , c, b);
        printf("%d--%d\n",a,c);
        Hnaoitower(n-1 ,b ,a, c);
    } 
}
main()
{
    int n,a,b,c;
    printf("Enter the value of N(Number of rings) :");
    scanf("%d",&n);
    printf("Enter A :");
    scanf("%d",&a);
    printf("Enter B :");
    scanf("%d",&b);
    printf("Enter C :");
    scanf("%d",&c);
    Hnaoitower(n,a,b,c);
    
}