#include<iostream>
using namespace std;
class ComplexNumbers {
    // Complete this class
    private:
    int real;
    int imaginary;
    public:
    ComplexNumbers(int r,int l)
    {
      real=r;
      imaginary=l;  
    }
  void print()
  {
      cout<<real<<" "<<"+"<<" "<<"i"<<imaginary;
  }
    void plus(ComplexNumbers const &c2)
    {
        real=real+c2.real;
        imaginary=imaginary+c2.imaginary;
    }
    void multiply(ComplexNumbers const &c2)
    {
        real=real*(c2.real);
        imaginary=imaginary*(c2.imaginary);
    }
    
};