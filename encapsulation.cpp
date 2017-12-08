#include<bits/stdc++.h>
using namespace std;

class Solution
{
    private:
        int x;
    public:
        Solution();
        void setData(int x);
        int getData();
};
Solution::Solution(){}
void Solution::setData(int a)
{
    x = a;
}
int Solution::getData()
{
    return x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    sol.setData(10);
    cout << sol.getData() <<endl;
    return 0;
}
