#include <iostream>
#include <cstring>
using namespace std;
void printSubstrings(char input[])
{
int i,j;
char output[100];
for(i=0;input[i]!='\0';i++)
{
    for(j=0;j<=i;j++)
    {                      
        cout<<input[j];   //abcd a,ab,b,abc,bc,c,abcd,bcd,cd,d
    }                     //a,b,c,d a,ab,abc,abcd 
                        // 
    cout<<"\n";
   }
   for(j=0;input[j]!='\0';j++)
    {
        cout<<input[j]<<"\n";
    }
}             
int main() {
 int size = 1e6;
char str[size];
cin >> str;
printSubstrings(str);
}