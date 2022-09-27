#include<iostream>
using namespace std;
int tripletSum(int *input, int size, int x)
{
	//Write your code here
    int i,j,k,t=0;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            for(k=0;k<size;k++)
            {
                if((input[i]+input[j]+input[k]==x) && (i!=j) && (j!=k) && (k!=i))
                {
                    t++;
                }
            }
        }
    }
    return t;
}
int main()
{
    int input[100],i,n,x,m;
    cin>>n;
    cin>>x;
    for(i=0;i<n;i++)
    {
        cin>>input[i];
    }
   m= tripletSum(input,n,x);
   cout<<m/6;
}