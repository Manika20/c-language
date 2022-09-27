#include<stdio.h>
int main()
{
    char a[20];
    FILE *fp;
    fp = fopen("subash.txt","r");
    fscanf(fp,"%s",a);
    printf("%s",a);
    return 0;
}