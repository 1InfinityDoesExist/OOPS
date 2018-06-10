#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int _var;
public:
    Solution();
    Solution(int var) : _var(var){}
    int operator()(int var)
    {
        return var*_var;
    }
};
Solution::Solution(){}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol(12);
    cout << sol(12) <<endl;
    return 0;
}
