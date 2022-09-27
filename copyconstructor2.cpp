#include<iostream>
using namespace std;
#include"copycontructor.cpp"
int main()
{  char name[]="manika";
    student s1(22,name);
    student s2(s1);
    s1.display();
    cout<<"\n";
    s2.display();
    cout<<"\n";
    cout<<"copied sucessfully";
    s2.name[3]='g';
    s1.display();
    cout<<"\n";
    s2.display();
    cout<<"\n";
    cout<<"changes in s2 marked no changes in s1";
    return 0;


}


