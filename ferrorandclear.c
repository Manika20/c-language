#include<stdio.h>
#include<string.h>
int main()
{
    char a[30]="manika goyal";
    FILE *fp;
    int b;
    fp= fopen("jkjk.txt","r");
    fprintf(fp,"%s",a);
    b=ferror(fp);
    printf("The value of b is %d\n",b);
    if(b==0)
    {
        printf("No error");
    }
    else{
        printf("Error exits!\n");
        printf("Correcting error using clear statement\n");
        clearerr(fp);
        b=ferror(fp);
        printf("Afrer using statement the value of b is %d \n",b);
        if(b==0)
        {
            printf("Error has been rectified \n");

            fprintf(fp,"%s",a);
        }
        else{
            printf("Error still exits.");
        }
        
    }
    return 0;

        }