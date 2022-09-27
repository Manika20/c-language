#include<stdio.h>
#include<stdio.h>
int main()
{
    int f=0,i,j;
    char a[20],b[20],c,d;
    printf("enter string 1");
    for(i=0;i<6;i++)
    {
        //printf("\nenter element %d : ",i+1);
    scanf("%c",&a[i]);
    fflush(stdin);//this function is important while entering string using char
    //because char also take enter as input to remove that we need to flush that.
}
a[i]='\0'; //as we have to define end point to get excess using %s.
    printf("\nenter string 2");
    for( j=0;j<6;j++)
    {  fflush(stdin);
         //printf("\nenter element %d : ",j+1);
    scanf("%c",&b[j]);  
    } 
    b[j]='\0';
    //printf("\n string 1 is \n");
    //for(i=0;i<6;i++)
    //{
    //printf("%c",a[i]);
    //}
    //printf("\n string 2 is \n");
    //for( j=0;j<6;j++)
    //{
      //  printf("%c",b[j]);
    //}

    printf("\n%s",a);
    printf("\n%s",b);
    printf("\n%d",strcmp(a,b));
    
    return 0;
        }