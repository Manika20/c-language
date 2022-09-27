#include<iostream>
using namespace std;
void rotate(int input[],int d,int n)
{
     int i,j,ans[100];
     for(i=n-d,j=0;i<n;i++,j++)
     {
        ans[i]=input[j];
        
     }
     cout<<"\n";
     for(i=0;d+i<n;i++)
     {
         ans[i]=input[d+i];
         //cout<<input[i]<<" ";
     }
     cout<<"\n";
     for(i=0;i<n;i++)
     {
         input[i]=ans[i];
        //cout<<ans[i]<<" ";
     }
      for(i=0;i<n;i++)
     {
         //input[i]=ans[i];
        cout<<input[i]<<" ";
     }
}
int main()
{
    int i,n,d,input[100];
    cin>>n;
    cin>>d;
    for(i=0;i<n;i++)
    {
        cin>>input[i];
    }
    rotate(input,d,n);
    return 0;
}