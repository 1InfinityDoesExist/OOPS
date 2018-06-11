#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    int _var;
    int _kar;
    int _tar;
public:
    Solution();
    Solution(int var):_var(var){};
    void setData(int kar);
    int getData();
    void setDataUsingThis(int tar);
    int getDataThis();
};
Solution::Solution(){}
void Solution::setData(int kar)
{
    _kar = kar;
    return;
}
int Solution::getData()
{
    return _kar;
}
void Solution::setDataUsingThis(int tar) // (Solution *const this)
{
    this->_tar = tar;
}
int Solution::getDataThis()
{
    return _tar;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol(4);

    sol.setData(14);
    int ans = sol.getData();
    sol.setDataUsingThis(2);
    int tan = sol.getDataThis();
    cout << tan << endl;
    cout << ans <<endl;
    return 0;
}
