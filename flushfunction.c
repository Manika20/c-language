#include<stdio.h>
int main()
{
char c,a[20];
int i=0;

while(c!='\n')
{
    fflush(stdin);
    scanf("%c",&c);
    a[i]=c;
    i++;
}
//a[i]='\0'; ek bar space print ho hi jata hai so instead of this use 
a[i-1]!='\0';
printf("\n%s",a);
return 0;
}