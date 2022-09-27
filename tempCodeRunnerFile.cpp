int search(int input[],int start,int end,int element)
{

    int mid=(start+end)/2;
    if(start<end)
    {
    if(input[mid]>element)
    {
        search(input,start,mid-1,element);
    }
    else if(input[mid]<element)
    {
        search(input,mid+1,end,element);
    }
    else
    {
        return  mid;
    }
    }
    return -1;
}

int binarySearch(int input[], int size, int element) {
    
    
    // Write your code here
    search(input,0,size-1,element);
}