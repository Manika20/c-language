#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    int first[26]={0},second[26]={0},i=0;
    while(input1[i]!='\0')
    {
        first[input1[i]-'a']++;
        i++;
    }
  

      i=0;
     while(input2[i]!='\0')  
    {
        second[input2[i]-'a']++;
        i++;
    }
    
    for(i=0;i<26;i++)
    {
        if(first[i]!=second[i])
        {
            return false;
        }
    }
    return true;
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
    return 0; 
}