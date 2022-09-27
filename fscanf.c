#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    FILE *fp;
    fp = fopen("jkjk.txt","r");
    fscanf(fp,"%s",a);
    printf("%s",a); //dont read space
    return 0;

}