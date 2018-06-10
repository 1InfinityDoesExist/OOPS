#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int _var;
public:
    Solution();
    Solution(int var) :_var(var){}
    operator int() const{
        return _var;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol(14);
    int ans = sol;
    cout << ans <<endl;
    return 0;
}
