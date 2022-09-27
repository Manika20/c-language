#include<stdio.h>
int main()
{
    int a,i,n,s=0;
    char m;
    printf("enter the table");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        n=a*i;
        s=s+n;
    }
    printf("the sum of numb is %d ",s);
   //m='a'+2;
   //printf("%c",m);
    return 0;

}