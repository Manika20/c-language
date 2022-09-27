#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fpointer;
    fpointer = fopen("you.txt","w");
    int age;
    char name[20];
    //printf("Enter the Age and Name");
    // scanf("%d %s",&age,&name);
    if(fpointer==NULL)
    {
        printf("File does not exits");
    }
    else
    {
printf("File exits");
printf("\nEnter the Age and Name");
scanf("%d %s",&age,&name);
fprintf(fpointer ,"%d \t%s",age,name);//a drawback is if name is manika goyal only 
// manika gets typed into file.
    }
return 0;
}