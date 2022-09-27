#include<stdio.h>
int main()
{
 char a;
 printf("enter the letter");
 scanf("%c",&a);
 if(a>='a' && a<= 'z')
 {
     printf("lower case");
 }else 
 {
     if( a>='A' && a<='Z')
 {
     printf("upper case");
 }
 else{
     printf("invalid operation");
 }
 }
 return 0;
}


