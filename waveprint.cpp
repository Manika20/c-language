#include <iostream>
using namespace std;
void wavePrint(int **input, int nRows, int mCols)
{
    int i,j;
    for(i=0;i<mCols;i++)
    {
        for(j=0;j<nRows;j++)
        {
            if(i%2==0)
            {
             cout<<input[j][i]<<" ";
            }
            if(i%2!=0)
            {
                cout<<input[nRows-1-j][i]<<" ";
            }
        }
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
		wavePrint(input, row, col);
		cout << endl;
	}
}