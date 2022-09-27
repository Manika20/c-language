#include<iostream>
#include<climits>
using namespace std;
void Leaders(int* arr,int len)
{
	int i,j;
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {    
            if(arr[i]<arr[j])
            {
                break;
            }
            else if(j==len-1)
            {
                cout<<arr[i]<<" ";
            }
        }
    }
    cout<<arr[len-1];
}

int main()
{
    int len;
    cin>>len;
	int *arr = new int[len + 1];
	
	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	Leaders(arr,len);
}