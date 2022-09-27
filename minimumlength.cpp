#include<iostream>
#include<climits>
#include<cstring>


using namespace std;
//void minLengthWord(char input[], char output[])
//{
//	int min= INT_MAX ;
  //  int current_index=0,l=0,i;}
void minLengthWord(char input[], char output[])
{

    int min = 99999999, i, j, k = 0, count = 0, m, l = 0, t = 0, y = 0;
    for (i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    for (i = 0; input[i] != '\0'; i++)
    {
        l++;
        //cout<<l<<"\n";
        if (input[i] == ' ')
        {
            k = l-1;
            if (min > k)
            {
                min = k;
                for (j = 0; j < k; j++)
                {
                    output[j] = input[i - k + j];
                }
            }
            l = 0;
        }
        if (i == count - 1)
        {   l=0;
            for (m = i; input[m] !=' '||m==0; m--)
            {
                l++;
            }
            if (min > l)
            {
                min = l;
                for (j = 0; j < l; j++)
                {
                    output[j] = input[i - (l) + j+1];
                }
            }
        }
    }
    output[j] = '\0';
    for (i = 0; i < j; i++)
    {
        input[y++] = output[j];
    }
}


int main(){
  char ch[10000], output[10000];
  cin.getline(ch, 10000);
  minLengthWord(ch, output);
 cout << output << endl;
}