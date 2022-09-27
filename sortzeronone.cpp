#include<iostream>
using namespace std;
void sortzeroandone(int input[] ,int size)
{
    int i,k=0,t;

    for(i=0;i<size;i++)
    {
        if(input[i]==0)
        {
           input[k]=0;
           k++;
        }
    }
    for(i=k;i<size;i++)
    {
        input[i]=1;
    }
    for(t=0;t<size;t++)
    {
        cout<<input[t]<<" ";
    }
}
int main()
{
    int input[100],i,j,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>input[i];
    }
    sortzeroandone(input,n);
    return 0;
}