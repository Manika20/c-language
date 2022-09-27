#include<iostream>
using namespace std;
void add(int input1[],int input2[],int n1,int n2)
{
    int i=0,j=0,c[100],k=0,n=0,t;

  while(i<n1 && j<n2)
    {
   if( input1[i]<input2[j])
   {
        c[k]=input1[i];            
        k++;
        i++;
   }
   else if(input1[i]==input2[j])
   {
       c[k]=input1[i];
       k++;
       c[k]=input2[j];
       k++;
       i++;
       j++;
   }
   else{
       c[k]=input2[j];
       k++;
       j++;
   }
    }
    i=i-1;
    j=j-1;
    cout<<k<<"\n";
    for(t=0;t<k;t++)
    {
        cout<<c[t]<<" ";
    }
    cout<<"\n";
    if((i<n1-1) && (j=n2-1))
    {
        for(t=k,n=0;t<n1+n2;t++,n++)
        {
            c[t]=input1[n+(k-n2)];
        }
        for(t=0;t<n1+n2;t++)
        {
            cout<<c[t]<<" ";
        }
    }
    
    if((j<n2-1) && (i=n1-1))
    {
        for(t=k,n=0;t<n1+n2;t++,n++)
        {
            c[t]=input2[n+(k-n1)];
        }
            for(t=0;t<n2+n1;t++)
        {
            cout<<c[t]<<" ";
        }
        }
    }


int main()
    {
int a[100],b[100],n1,n2,i,j;
cin>>n1;
cin>>n2;
for(i=0;i<n1;i++)
{
    cin>>a[i];
}
for(j=0;j<n2;j++)
{
    cin>>b[j];
}
add(a,b,n1,n2);
return 0;
    }
