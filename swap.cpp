
#include<iostream>
using namespace std;
void swapAlternate(int *arr, int size)
{
    //Write your code here
    int j,temp,m,i;
    if(size%2==0)
    {
    for(j=0;j< size;j=j+2)     
    {
    temp=arr[j];       
   arr[j]=arr[j+1];    
    arr[j+1]=temp;   
    }
    }
    else
    {
    m=arr[size-1];
    //cout<<m<<"\n";
    for(j=0;j< size;j=j+2)     
    {
    temp=arr[j];       
   arr[j]=arr[j+1];    
    arr[j+1]=temp;
    }
    arr[size-1]=m;
    }
}
int main()
{
    int n,i,j,arr[100],k;
    cin>>n;
     for(k=0;k<n;k++)
    {
    cin>>arr[k];
    }
    swapAlternate(arr,n);
     for(k=0;k<n;k++)
    {
    cout<<arr[k]<<" ";
    }  
    return 0;
}