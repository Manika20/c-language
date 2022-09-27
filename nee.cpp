#include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n,i=1,j;
    cin>>n;
    while(i<=(n/2)+1)
    {    j=1;
        while(j<=n/2-(i-1))
        {
            cout<<" ";
            j++;
        }
     j=1;
     while(j<=i)
     {
         cout<<"*";
         j++;
     }
     j=1;
     while(j<i)
     {
         cout<<"*";
         j++;
     }
     i++;
     cout<<"\n";
    }
    i=1;
    while(i<=n/2)
    {
        j=1;
        while(j<=i)
        {
            cout<<" ";
            j++;
        }
        j=1;
        while(j<=n- 2*i)
              {
                  cout<<"*";
                  j++;
              }
              i++;
              cout<<"\n";
    }
  return 0;  
}
