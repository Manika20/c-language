#include<stdio.h>
int main()
{
    FILE *pointer;
   pointer = fopen ("subash.txt","w");
   char a[20];
   printf("Enter the string ");
   scanf("%s",a);
   fprintf(pointer,"%s",a);
   return 0;

}