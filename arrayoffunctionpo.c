#include<stdio.h>

    void add( int a,int b)
    {
        printf("%d",a+b);
    }
    void sub( int a,int b)
    {
        printf("%d",a-b);
    }
    void mul( int a,int b)
    {
        printf("%d",a*b);
    }
    void div( int a,int b)
    {
        printf("%d",a/b);
    }
    int main()
    {int n ,a,b;
        int (*ptr[10])(int, int)={add,sub,mul,div};
        printf("Enter the choice ");
        scanf("%d",&n);
        printf("Enter a and b");
        scanf("%d%d",&a,&b);
(*ptr[n])( a, b);
return 0;
    }
   
