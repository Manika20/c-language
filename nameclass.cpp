#include<iostream>
using namespace std;
#include<string.h>
class manika
{   public :
    int age;
    char *name;
    manika(int age,char name[])
    {
    this->age=age;
    this->name= new char[strlen(name)+1];
    strcpy(this->name, name);
    }
    void display()
    {
    cout<<"age: "<<age<<"\n""name: "<<name;
     }
};
