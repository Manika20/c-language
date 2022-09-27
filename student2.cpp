#include<iostream>
using namespace std;
#include"student.cpp"
int main()
{  
     
    student s1;
    s1.age=21;
    s1.roll=13;
    student s2(s1);
    s2.display();
    return 0;
}