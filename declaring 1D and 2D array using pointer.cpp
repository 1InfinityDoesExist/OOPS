#include<bits/stdc++.h>
using namespace std;

class Solution
{
  private:
  public:
    Solution();
};
Solution::Solution(){}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
//This one is for declaring and defining one_d array using pointer. (Dynamic approach);
//in c;
    int oned_size = 10;

    int *dp = (int *)malloc(sizeof(int) * oned_size);
    for(int iter = 0; iter < oned_size; iter++)
    {
        dp[iter] = iter;
        cout << dp[iter] << " ";
    }

    cout << endl;


    //for2D array...

    int row = 5;
    int col = 10;
    int **table = (int **)malloc(sizeof(int) * row);
    for(int iter = 0; iter < col; iter++)
    {
        table[iter] = (int *)malloc(sizeof(int) * col);
    }
    for(int iter = 0; iter < row; iter++)
    {
        for(int jter = 0; jter < col; jter++)
        {
            table[iter][jter] = 0;
            cout << table[iter][jter] << "  ";
        }
        cout << endl;
    }
//This one is for declaring and defining one_d array using pointer. (Dynamic approach);
//in c++;
   int *pd = new int[10];
    for(int iter = 0; iter < oned_size; iter++)
    {
        pd[iter] = iter;
        cout << pd[iter] << " ";
    }

    cout << endl;

//for 2D use vector "chirkut".....


    return 0;
}
