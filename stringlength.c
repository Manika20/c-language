#include<stdio.h>
#include<string.h>
int main()
{
int l=0,i=0;
char a[20];// way 1 to initialize.
//char a[] = "harry";  2nd way to inialize.
scanf("%s",a);
while(a[i]!='\0')
{
    l=l+1;
    i++;
}
printf("%d",l);
return 0;
}