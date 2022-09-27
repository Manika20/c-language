#include<stdio.h>
int main()
{
    if(rename("manika.txt","goyal.txt")==0)
    {
        printf("File is renamed succesfully");
    }
    else{
        printf("File not renamed");
    }
    return 0;
}