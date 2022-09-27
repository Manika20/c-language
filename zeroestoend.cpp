#include<iostream>
using namespace std;
void zeroes(int input[] ,int size)
{
    int i,j=0;
    for(i=0;i<size;i++)
    {
        if(input[i]!=0)
        {
            input[j]=input[i];
            j++;
        }
    }
    for(i=j;i<size;i++)
    {
        input[i]=0;
    }
    for(i=0;i<size;i++)
    {
        cout<<input[i]<<" ";
    }
}
int main()
{
    int i,j,input[100],n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>input[i];
    }
    zeroes(input,n);
    return 0;
}