#include<stdio.h>
#include<string.h>
int main()
{
    FILE *pointer;
    pointer = fopen("manika.txt","w");
    char a[20]={"manika goyal"};
    int l,i=0;
    l=strlen(a);
    for(i=0;i<l;i++)
    //while(!feof(pointer)) dont use while statement here.
    {
        fputc(a[i],pointer);
   
    }
    return 0;
  }