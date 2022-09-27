#include<stdio.h>
int main()
{
    char a[]="manika";
    char *ptr = a;
    while(*ptr!='\0')
    {
        *ptr = *ptr +1;//by subtracting we can decrpyt and taking the output
        ptr++;
    }
    printf("%s",a);
}