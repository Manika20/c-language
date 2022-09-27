#include<iostream>
using namespace std;
int findUnique(int *arr, int size)
{
    int i,j,flush=0;                 
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                flush++;
                
            }
        }
        if(flush==1)
        {
        return arr[i];
        }
        flush=0;
    }
}
int main()
{
    int i,j,k,n,t,arr[100];
    cin>>n;
    for(k=0;k<n;k++)
    {
     cin>>arr[k];
    }
  t =  findUnique( arr,n);
  cout<<t;
  return 0;
}