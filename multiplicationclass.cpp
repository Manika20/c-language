#include<iostream>
using namespace std;
class matrix
{
   int a[100][100],b[100][100],c[100][100],d[100][100],i,j,m,n,p,q;
   public:
 void  input()
 {
    cout<<"Enter The matrix 1"<<endl;
    cout<<"Enter the rows for matrix1"<<endl;
    cin>>m;
     cout<<"Enter the cols for matrix1"<<endl;
    cin>>n;
    cout<<"Enter the elements for matrix1"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
     cout<<"Enter the rows for matrix2"<<endl;
    cin>>p;
     cout<<"Enter the cols for matrix2"<<endl;
    cin>>q;
    cout<<"Enter the elements for matrix2"<<endl;
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cin>>b[i][j];
        }
    }

 }
 void add()
 {
    if(m!=p || n!=q )
    {
        cout<<"Invalid operations"<<endl;
        return;
    }
    cout<<"Addition Of Matricies is"<<endl;
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
 }
 void multiply()
 {
    if(n!=p)
    {
        cout<<"Invalid Operations"<<endl;
        return;
    }
    cout<<"Multiplication Of 2 Matrix is:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            int sum=0;
            for(int k=0;k<n;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            d[i][j]=sum;
            cout<<sum<<" ";
        }
        cout<<endl;
    }
 }
 };
int main()
{
 matrix t;
 t.input();
 t.add();
 t.multiply();   
}
