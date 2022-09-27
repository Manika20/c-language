#include<stdio.h>

int main()
{
    FILE *fp;
    char a,b[20];
    int n;
    fp = fopen("jkjk.txt","r");
   // fscanf(fp,"%s",a);
    //printf("%s",a);
    while(!feof(fp))
    {
   a= fgetc(fp);
    printf("%c",a);
    }
    //fgets(b,30,fp);
    //printf("%s",b);
    //fscanf(fp,"%s",b);
   // printf("%s",b);
 //rewind(fp);
     printf("\n");
    //fseek(fp,10,0);  10increement 0--initail position ,1 center , 2 end
    //n= ftell(fp); //n tells the bytes.
    //printf("%d is the position\n",n);
     while(!feof(fp))
    {
    a= fgetc(fp);
   printf("%c",a);
    } 
    //fgets(b,30,fp);
    //printf("%s",b);  
    return 0;
}