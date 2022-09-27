#include<iostream>
using namespace std;
void arrange(int *arr, int n)
{
int i,j,k;
if(n%2!=0)
{
    for(  i=0; i<(n+1)/2; i++)  
    {
        arr[i]=2*i+1;
    }
    
    for(  i=(n+1)/2,k=1 ; i<n ; i++,k=k+2)   
    {
    
        arr[i]= n-k;  
        //k=k+2;
    }
    
    
}
    else if(n%2==0)
    {

        for(  i=0; i<n/2; i++)     
        {
        arr[i]=2*i+1;
        }
        
        for( i=n/2,j=0; i<n; i++,j=j+2) 
        {
          arr[i]=n-j;
            //j=j+2;
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
  