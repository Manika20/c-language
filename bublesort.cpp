#include<iostream>
using namespace std;
void bubbleSort(int *input, int size)
{
    //Write your code here
    int i,j,temp;
    for(i=0;i<=size;i++)
    {
        for(j=0;j<=size;j++)
        {
            if(input[j]>input[j+1])
            {
                 temp=input[j];
                 input[j]=input[j+1];
                 input[j+1]=temp;
            }
        }
    }
}
int main()
{
    int i,j,n,input[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>input[i];
    }
    bubbleSort(input,n);
    cout<<"\n";
    for(i=0;i<n;i++)
    {
        cout<<input[i]<<" ";
    }
return 0;
}
