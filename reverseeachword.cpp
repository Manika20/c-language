#include <iostream>
#include <cstring>
using namespace std;

void reverseEachWord(char input[]) {
    // Write your code here
    int i,k=0,j,t=0,count=0,m;
    char output[100];
    for(i=0;input[i]!='\0';i++)
    {
        count++;
    }
    for(i=0;input[i]!='\0';i++)
    {
        if(input[i]==' ')
        {
           for(j=0;j<i-t;j++) 
           {
          output[k]=input[i-j-1];
          k++;
           }
           output[k]=' ';
           k++;
           t=k;
        }
        else if(i==count-1)
        {  for(m=0;input[i-m]!=' ';m++)
        {
            output[k]=input[i-m];
            k++;
        }
        }
        
    }
    input[k]='\0';
    for(i=0;i<k;i++)
    {
        input[i]=output[i];
    }
}

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}