#include<stdio.h>
#include<string.h>
int main()
    {

FILE *pointer;
char a[20];
pointer = fopen("Anita.txt","w");
printf("Enter the string");
gets(a);
fputs(a,pointer);
return 0;
 }
