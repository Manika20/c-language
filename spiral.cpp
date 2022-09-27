#include <iostream>
//#include <cstring>
using namespace std;
void spiralPrint(int **input, int nRows, int nCols)
{
    int i,j;
    for(i=0;i<nRows-1;i++)
    {
        for(j=i;j<nCols-i-1;j++)
        {
             cout<<input[i][j]<<" ";
        }
    }
     for(i=0;i<nRows-1;i++)
    {
        for(j=i;j<nCols-i-1;j++)
        {
             cout<<input[j][nCols-1-i]<<" ";
        }
    }
    for(i=0;i<nRows-1;i++)
    {
        for(j=i;j<nCols-i-1;j++)
        {
             cout<<input[nRows-1-i][nCols-1-j]<<" ";
        }
    }
    for(i=0;i<nRows-1;i++)
    {
        for(j=i;j<nCols-i-1;j++)
        {
             cout<<input[nRows-1-j][i]<<" ";
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
    
    spiralPrint(matrix,row,col);
    }
    return 0;
}