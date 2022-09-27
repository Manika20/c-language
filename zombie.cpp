using namespace std;
#include <iostream>
void merge2(int input[],int start,int mid,int end)
{
    int n1,n2,i,j,k=0,t,m,output[10000];
    n1=mid-start+1;
    n2=end-mid;
    //cout<<start<<" "<<mid+1<<" ";
    int a[n1],b[n2];
    for(i=0;i<n1;i++)     
    {
        a[i]=input[start+i];
        //cout<<a[i]<<" ";
    }
    for(i=0;i<n2;i++)
    {
        b[i]=input[mid+1+i];
       //cout<<b[i]<<" ";
    }
   i=0;
   j=0;
   k=0;
  while(i<n1 && j<n2)
  {
    if(a[i]<b[j])
    {
        output[k]=a[i];
        k++;
        i++;
    }
    else if (a[i]>b[j])
    {
        output[k]=b[j];
        k++;
        j++;
    }
    else if (a[i]==b[j])
    {
        output[k]=a[i];
        k++;
        i++;
        output[k]=b[j];
        k++;
        j++;
    }
  }
    m=k;
   
    if(i<n1)
    {
        for(t=m;t<n1+n2;t++)
        {
            output[k]=a[i];
            k++;
            i++;
        }
    }
    if(j<n2)
    {
        for(t=m;t<n1+n2;t++)
        {
            output[k]=b[j];
            k++;
            j++;
        }
    }
    for(i=0;i<n1+n2;i++)
    {
        input[i+start]=output[i];
    }
}
void merge(int input[],int start,int end)
{   
    int mid;
    if(start<end)
    {
        mid=(start+end)/2;
        merge(input,start,mid);
        merge(input,mid+1,end);
        merge2(input,start,mid,end);
    }
}

void mergeSort(int input[], int size){
	// Write your code here
    
    merge(input,0,size-1);
        
}
int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}