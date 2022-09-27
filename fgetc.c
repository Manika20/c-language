#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("jkjk.txt","r"); //use to raed a file
    if(fp==NULL)
    {
        printf("NO such file");
    }
    else{
        printf("file exits");
        while( ch  != EOF )
        {
            ch = fgetc(fp);//read karwado
            printf("%c",ch);//print krwado
        }
        fclose(fp);
    }
    return 0;
}