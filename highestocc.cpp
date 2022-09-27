#include <iostream>
#include <cstring>
using namespace std;
char highestOccurringChar(char input[]) {
    int first[26]={0},i,j=0;
    char max;
    for(i=0;input[i]!='\0';i++)
    {
        first[input[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        if(first[i]>j)
        {
           j=first[i];
          max=i+'a';
        }
    }
    return max;
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}