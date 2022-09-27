#include<iostream>
using namespace std;
int linearSearch(int *arr, int n, int x)
{
    int i;
    for(i=0;i<n;i++)
    {
    if(arr[i]==x)
    {
        return i;
    }
    }
    return -1;
    
}
int main()
{
    int n,x,arr[100000],t,j=0,m,i;
    cin>>t;
    while(j<t)
    {
    cin>>n;
    for(i=0;i<n;i++) 
    {
        cin>>arr[i];
    }
        cin>>x;  
        linearSearch(arr,n,x);
        cout<<linearSearch(arr,n,x);
        j++;
        cout<<"\n";
    }
    return 0;
}