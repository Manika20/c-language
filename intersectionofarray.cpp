#include<iostream>
using namespace std;
void ArrayIntersection(int input1[], int input2[], int size1 ,int size2)
{
    int i,j;
    for(i=0;i<size1;i++)
    {
        for(j=0;j<size2;j++)
        {
            if(input1[i]==input2[j])
            {
                cout<<input1[i]<<" ";
                input2[j]=-999;
                break;
            }
        }
    }
}
int main()
{
    int i,j,input1[100],input2[100],n,m;
    cin>>n;
    cin>>m;
    for(i=0;i<n;i++)
    {
        cin>>input1[i];
    }
      for(j=0;j<m;j++)
    {
        cin>>input2[j];
    }
    ArrayIntersection(input1,input2,n,m);
    return 0;
}