#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fpointer;
    int i,l;
    char a[20] = " anita goyal";
    l= strlen(a);
    fpointer =fopen("kaju.txt","w");
    if(fpointer==NULL)
    {
        printf("no such file"); //used to write in file
    }
    else
    {
        printf("The file exits");
        for(i=0;i<l;i++)
        {
        fputc(a[i],fpointer);
        }
        fclose(fpointer);
    }
return 0;
}