#include<iostream>
using namespace std;
//int main()
//{
    
    //char s[]= "hello";
    //char *p = &s[0];
    //char *p= s;

int f(int x, int *py, int **ppz) {
    int y, z;
    **ppz += 1;
    z = **ppz;
    cout<<z<<" ";
    *py += 2;
    y = *py;
    cout<<y<<" ";
    x += 3;
    cout<<x<<"\n";
    return x + y + z;
}

int main() {
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    cout << f(c, b, a);
    cout<<c;
    return 0;
}
