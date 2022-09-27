#include<stdio.h>
#include<string.h>
//#include<conio.h>
int main()
{
    FILE *fp;
    fp = fopen("jkjk.txt","r");
    char a[30];
    //while(!feof(fp))
    //{
    fgets(a,30,fp);
    printf("%s",a);
    //}
    return 0;
}