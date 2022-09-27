
#include <iostream>
#include <cstring>
#include<string>
using namespace std;

 string getCompressedString(string &input) {
    string compress="";
    int i=0,j,t=1,m=0;
    while(input[i]!='\0')                     
    {
        if(input[i]==input[i+1])
        {
            for(j=i+1;input[i]==input[j];j++)
            {
               t++;
            }
            compress+=input[i];
            //abc=abc+d;
            compress+=char(t+'0');
            // '4'  
            //compress+=stoi(t);
            t=1;
            i=j;
        }
        else if(input[i]!=input[i+1])
        {
            compress+=input[i];
            i++;
        }
    }
    
    return compress;
}




int main() {
    int size = 1e6;
    string str;
    getline(cin, str);
    str = getCompressedString(str);
    cout << str << endl;
}