#include<iostream>
using namespace std;
#include<string.h>
class student
{
    public:
    int age;
    int roll;
    
    student()
    {
        cout<<"constructor 1 called!"<<"\n";
    }
    student(int age,int roll)
    {  
         cout<<"constructor 2 called!"<<"\n";
        cout<<"this :"<<this<<"\n";
        (*this).age=age;
        (*this).roll=roll;

}
    void display()
    {
        cout<<"age: "<<age<<"roll: "<<roll;
    }

};

