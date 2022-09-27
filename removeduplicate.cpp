#include <iostream>
#include <cstring>
using namespace std;

void removeConsecutiveDuplicates(char input[]) {
   int i,j,k=0,count=0;
   char output[100];
   for(i=0;input[i]!='\0';i++)
   {
       count++;
   }
  for(i=0;i<count;i++)
  {
      if(input[i]!=input[i+1])
      {
          output[k]=input[i];
          k++;
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
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout<<str;
}