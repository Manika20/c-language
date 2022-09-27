#include <iostream>
#include <cstring>
using namespace std;
void reverseStringWordWise(char input[])
 {
 int i,count=0,j=0,k=0,t;
  char output[100];
 for(i=0;input[i]!='\0';i++) 
 {
   count++;
 }  
 for(i=count-1;i>=0;i--,k++)
 {
     if(input[i]==' ')
     {    
      for(t=0;t<k;t++)       //manika goyal anita 
                             //123456789012345678                  
         { 
         output[j]=input[i+1+t];
         j++;
         }
         k=0;
        output[j]=' ';
        j++;
     }
     else if(i==0)
     {  
         for(t=0;t<k;t++)
     {
         output[j]=input[i+t];
         j++;
     }
    }
 }
    input[j]='\0';
    for(i=0;i<j;i++)
    {
        input[i]=output[i];
    }
    cout<<input;
   
 }
int main()
 {
    char input[100];
    cin.getline(input, 100);
    reverseStringWordWise(input);
    //cout << input << endl;
    return 0;
}
