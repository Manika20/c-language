#include<iostream>
using namespace std;
#include"constclass.cpp"
int main()
{
    student s1(22,45);
    student const s2 = s1;
    cout<<s2.age<<" "<<s2.roll;

}