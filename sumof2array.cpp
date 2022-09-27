#include<iostream>
using namespace std;
void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
int i,j,sum[100],k=size1-1,a,carry=0,ans,t,r;
j=size2-1;
i=size1-1;
while(j>=0)
{
   a=input1[i] + input2[j] +carry;
   sum[k]=a%10;
   i--;
   j--;
   k--;
   carry=a/10;
}
while(i>=0)
{
    a=input1[i]+carry;
    sum[k]=a%10;
    i--;
    k--;
    carry=a/10;
}
if(carry!=0)
{
    ans=10;
    for(t=0;t<size1;t++)
    {    
        ans=ans+sum[t];
        ans=ans*10;
    }
    ans=ans/10;
    for(i=0;i<=size1;i++)
    {
        r=ans%10;
        sum[i]=r ;       
        ans=ans/10;
        
    }
    for(i=0;i<=size1;i++)
    {
        output[i]=sum[size1-i];
        cout<<output[i]<<" ";
    }
}
else{
    output[0]=0;
    for(i=1;i<=size1;i++)
    {   
        output[i]=sum[i-1];   
    }
    for(i=0;i<=size1;i++)
    {
        cout<<output[i]<<" ";
    }
}

}
void calling(int arr1[],int n1,int arr2[],int n2,int output[])
{
    if(n1>=n2)
    {
        sumOfTwoArrays( arr1 ,n1, arr2, n2, output);
    }
    else{
         sumOfTwoArrays( arr2 , n2,arr1, n1, output);
    }
}

int main()
{
    int n1,n2;
    cin>>n1;
    cin>>n2;
    int i,arr1[100],arr2[100],output[100];
   for(i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    for(i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    calling(arr1,n1,arr2,n2,output);
   
   return 0;
}