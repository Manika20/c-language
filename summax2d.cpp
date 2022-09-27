#include <iostream>
using namespace std;

void findLargest(int **input, int nRows, int mCols)
{
    //Write your code here
    int max1=-2147483647,max2=-2147483647,i,j,sum1=0,sum2=0,index1,index2;
    for(i=0;i<nRows;i++)
    {
        for(j=0;j<mCols;j++)
        {
             sum1=sum1+input[i][j];
        }
        if(sum1>max1)
        {
            max1=sum1;
            index1=i;
        }
        sum1=0;
    }
     for(i=0;i<mCols;i++)
    {
        for(j=0;j<nRows;j++)
        {
             sum2=sum2+input[j][i];
        }
        if(sum2>max2)
        {
            max2=sum2;
            index2=i;
        }
        sum2=0;
    }
    if(max1>max2)
    {
        cout<<max1<<" ";
        cout<<"row "<<index1;
    }
    else if(max2>max1)
    {
        cout<<max2<<" ";
        cout<<"col "<<index2;
    }
    else{
      cout<<-2147483647;
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;
	}
}