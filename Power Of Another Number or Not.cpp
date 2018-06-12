#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    bool mila(int x, int y);
};
Solution::Solution(){}
bool Solution::mila(int x, int y)
{
    int res1 = log(y)/log(x);
    double res2 = log(y)/ log(x);
    return (res1 == res2);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int x;
    cin >> x;
    int y;
    cin >> y;
    if(sol.mila(x, y))
    {
        cout << "Ha Hey" << endl;
    }
    else
    {
        cout << "Na beta nahi hey" <<endl;
    }
    return 0;
}
