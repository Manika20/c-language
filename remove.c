#include<stdio.h>
int main()
{
    //if(remove("goyal.txt")==0)
    //if file is present is folder
    if(remove("delete/ranju.txt")==0)
    {
        printf("File is deleted succesfully");
    }
    else{
        printf("File is not deleted");
    }
    return 0;
}