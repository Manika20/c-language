#include<iostream>
#include<string.h>
#include"nameclass.cpp"
using namespace std;
int main()
{   char name[]="abcd";
    manika m1(12,name);
    m1.display();
    manika m2(m1);
    cout<<"\n";
    m2.display();
    m2.name[0]='m';
    cout<<"\n";
    m1.display();
    cout<<"\n";
    m2.display();
    return 0;
}