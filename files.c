#include<stdio.h>
int main()
{
   FILE  *fpointer;
   fpointer = fopen("read.txt","r");//if r than no file.
   //if w one such file will be created dont forget to delete.
   if(fpointer== NULL)
   {
       printf("No file is created");
   }
   else{
       printf("File is successfully opened");
       fclose(fpointer);
   }
   return 0;
}