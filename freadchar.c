#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i=0;
    FILE *pointer;
    pointer = fopen("manika.txt","r");
    while(!feof(pointer))
{
    a[i]=fgetc(pointer);
    printf("%c",a[i]);
    i++;
}
return 0;
}