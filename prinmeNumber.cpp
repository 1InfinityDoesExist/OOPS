#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    void printPrintNumber(const int N);
};
Solution::Solution(){}
void Solution::printPrintNumber(const int N)
{
    vector<int> ans;
    int sz = N+1;
    int *dp = (int *)malloc(sizeof(int) * sz);
    for(int iter = 0; iter <= sz; iter++)
    {
        dp[iter] = 0;
    }
    dp[0] = dp[1] = 1;
    for(int iter = 2; iter <= N; iter++)
    {
        if(dp[iter] == 0)
        {
            ans.push_back(iter);
            for(int jter = 2*iter; jter <= N; jter = jter+iter)
            {
                dp[jter] = 1;
            }
        }
    }
    for(vector<int>::iterator iter = ans.begin(); iter != ans.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int testCase;
    cin >> testCase;
    while(testCase--)
    {
        int n;
        cin >> n;
        sol.printPrintNumber(n);
    }
    return 0;
}
