#include<stdio.h>
int main()
    {
        FILE *fp;
        fp = fopen("checking.txt","r");
        char a[100];
        int i,c1=0,c2=0,c3=0,c4=0;
        fgets(a,30,fp);
        for(i=0;a[i]!='\0';i++)
        {
if(a[i]>=65 && a[i]<=90)
{
c1++;
}
else if(a[i]>=97 && a[i]<=122)
    {
c2++;
    }
else if(a[i]>=48 && a[i]<=57)
{
c3++;
}
else{
    c4++;
}
        }
        printf("\nNO of Uppercase %d",c1);
        printf("\nNO of lowercase %d",c2);
        printf("\nNO of digits %d",c3);
        printf("\nNO of special charcter %d",c4);
             return 0;   
    }
