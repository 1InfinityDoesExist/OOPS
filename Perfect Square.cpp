#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    bool isPerfectSquare(int N);
};
Solution::Solution(){}
bool Solution::isPerfectSquare(int N)
{
    int n1 = sqrt(N);
    double n2= sqrt(N);
    return n1 == n2;
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
        if(sol.isPerfectSquare(n))
        {
            cout << "Yes It's a perfect Square" << endl;
        }
        else
        {
            cout << "No it's not a perfect square" << endl;
        }
    }
    return 0;
}
