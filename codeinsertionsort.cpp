#include<iostream>
using namespace std;
void insertionSort(int input[],int n)
{
int current,i,j;
for(i=0;i<n;i++)
{
//current =input[i];
for(j=i-1;j>=0;j--)
{
    if(current<input[j])
    {
        input[j+1]=input[j];
    }
    else{
        break;
    }
}
cout<<j<<"\n";
input[j+1] = current;
}
for(i=0;i<n;i++)
{
    cout<<input[i]<<" ";
}
}
int main()
{
    int n,input[100],i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>input[i];
    }
    insertionSort(input,n);
    return 0;
}