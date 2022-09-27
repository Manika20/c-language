#include<iostream>
#include<string.h>
using namespace std;
class student
{
    public:
    int age;
    char *name;
    //constructor:
    student(int age,char name[])
    {
        this->age=age;
        this->name = new char[strlen(name)+1];
        strcpy(this->name,name);
}
//copyconstructor:
student(student const &s)
{
    this->age=s.age;
    this->name=new char[strlen(s.name)+1];
    strcpy(this->name,s.name);
}
void display()
{
    cout<<"age: "<<age<<"name :"<<name;
}

};
