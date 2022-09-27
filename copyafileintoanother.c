#include<stdio.h>
#include<string.h>
int main()
{
    FILE *pointer1;
    FILE *pointer2;
    char a[50],b[20];
    pointer1 = fopen("file1.txt","a");
    printf("write the content of fil1:\n");
    gets(a);
    fputs(a,pointer1);
    //rewind(pointer1);
    //fgets(a,50,pointer1);
    pointer1 = fopen("file1.txt","r");
    fgets(a,50,pointer1);
    printf("Reding the content of file\n");
    //printf("%s",a);
    printf("%s",a);
    printf("\nCopying this content into file 2\n");
    pointer2 = fopen("file2.txt","a");
    fputs(a,pointer2);
    return 0;
}