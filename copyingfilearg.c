#include<stdio.h>
#include<stdlib.h>
//"C:\Users\goyal\OneDrive\Desktop\c language\Anita.txt"
int main(int argc,char* argv[])
{
    FILE *pointer1;
    FILE *pointer2;
    char a[100];
    pointer1= fopen(argv[1],"r");
    pointer2 =fopen(argv[2],"w");
    if(argc!=3)
    {
        printf("invalid argument");
    }
    else
    {
fgets(a,20,pointer1);
fputs(a,pointer2);
 printf("copied sucessfully");
    }
   
return 0;  
}