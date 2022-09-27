#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    FILE *pointer;
    pointer = fopen("anita.txt","r");
    fgets(a,20,pointer);
    printf("%s",a);
    return 0;

}