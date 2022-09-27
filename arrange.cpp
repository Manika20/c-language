#include<iostream>
using namespace std;
void arrange(int *arr, int n)
{
if(n%2==0)
{
    for(int i=0; i<n/2; i++)  
    {
        arr[0]=1;
        arr[i+1]=arr[i]+2;    
    }
    
    for(int i=n-1; i>n/2  ; i--)   
    {
        arr[n-1]=2;
        arr[i-1]=arr[i]+2;     
    }
    
    
}
    else
    {
        int x=(n-1)/2;
        for(int i=0; i<(n-1)/2; i++)  
        {
        arr[0]=1;
        arr[i+1]=arr[i]+2; 
        }
        
        for(int i=n-1; i>(n-1)/2 +1; i--) 
        {
          arr[n-1]=2;
        arr[i-1]=arr[i]+2;
        }
        
    }
  

}
int main()
{
    int n,i,j,arr[100],k;
    cin>>n;
    arrange(arr,n);
     for(k=0;k<n;k++)
    {
    cout<<arr[k]<<" ";
    }
    
    return 0;
}
  
