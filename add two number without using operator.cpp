#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    int add(int x, int y);
};
Solution::Solution(){}
int Solution::add(int x, int y)
{
    while(y != 0)
    {
        int carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }
    return x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int x, y;
    cin >> x >> y;
    int ans = sol.add(x, y);
    cout << ans << endl;
    return 0;
}
