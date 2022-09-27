#include<iostream>
using namespace std;
int binarySearch(int input[],int n,int value)
{
    int mid,start,end;
    start =0;
    end =n;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(input[mid]==value)
        {
            return mid;
        }
        else if(input[mid]>value)
        {
            //start=start;
            end=mid-1; 
        }
        else
        {
            start=mid+1;
            //end =end;
        }
    } 
    return -1;   
}
int main()
{
    int i,n,x,input[100],m;
    cin>>n;
    cin>>x;
    for(i=0;i<n;i++)
    {
        cin>>input[i];
    }
m=binarySearch(input,n,x);
cout<<m;
}