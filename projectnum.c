#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n,a,b,i=1;
    srand(time(0));
    n=rand()%100 +1 ; //for n to be in 1 and 100
    //scanf("%d",&n);
    printf("Guess the Number ");
    scanf("%d",&a);
    //printf("%d %d",n,a);
    for(i=1;a!=n;i++)
    {
    if(a>n)
    {
        printf("\n SORRY! Guess a lower number");
        scanf("%d",&a);
        //a=b;
    }
    else{
        printf(" \n SORRY! guess a higher number");
        scanf("%d",&a);
        //a=b;
    }
    }
    printf("\nCONGRATULATIONS you guessed it in %d goes ",i );
    return 0;
}