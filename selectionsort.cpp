#include<iostream>
using namespace std;
void selectionsort(int input[], int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(input[i]>input[j])
            {
                 temp= input[i];
                 input[i]=input[j];
                 input[j]=temp;
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
    selectionsort(input,n);
    cout<<"\n";
    for(i=0;i<n;i++)
    {
        cout<<input[i]<<" ";
    }
return 0;
}