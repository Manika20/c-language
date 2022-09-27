#include<iostream>
#include<climits>
#include<cstring>
using namespace std;
void minLengthWord(char input[], char output[])
{
int min=INT_MAX,i,l=0,k,j;
int y=strlen(input);
for(i=0;i<=y;i++)
{
    l++;
    if(input[i]==' '||input[i]=='\0')
    {
        k=l-1;
        if(min>k)
        { 
            min=k;
            for(j=0;j<k;j++)
            {
                output[j]=input[i-k+j];
            }
        }
        l=0;
    }  
}
output[j]='\0';
}

int main(){
  char ch[10000], output[10000];
  cin.getline(ch, 10000);
  minLengthWord(ch, output);
  cout << output << endl;
}
