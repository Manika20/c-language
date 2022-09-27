#include<iostream>
using namespace std;
void sort(int input[],int n)
{
    int i,j=0,ans[100];
    
    for(i=0;i<n;i++)
    {
        if(input[i]==0)
        {
            ans[j]=0;
            j++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(input[i]==1)
        {
            ans[j]=1;
            j++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(input[i]==2)
        {
            ans[j]=2;
            j++;
        }
    }
    for(i=0;i<n;i++)
    {
       input[i]=ans[i];
       cout<<input[i]<<" ";
    }
}
int main()
{
    int i,n,input[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>input[i];
    }
    sort(input,n);
    return 0;
}