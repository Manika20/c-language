#include<iostream>
using namespace std;
#include"student.cpp"
int main()
{
    student s1;
    cout<<"\n";
    //garbage values wl be printed.
    s1.display();
    cout<<"\n";
    student s2(22,45);
    cout<<"\n";
    cout<<"address of s2"<<&s2;
    cout<<"\n";
    // no garbage values wl be printed.
    s2.display();
    cout<<"\n";
    student s3(10,23);
    cout<<"\n";
    cout<<"address of s3"<<&s3;
    cout<<"\n";
    s3.display();

return 0;
}
