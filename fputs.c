#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fpointer;
    int i,l;
    char a[20];
    fpointer =fopen("rani.txt","w");//use to write in a file
    if(fpointer==NULL)
    {
        printf("no such file");
    }
    else
    {
        printf("The file exits");
        printf("\nEnter the string");
        gets(a);
        fputs(a,fpointer);
        fclose(fpointer);
    }
return 0;
}