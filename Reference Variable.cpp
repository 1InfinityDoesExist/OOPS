#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    void check();
};
Solution::Solution(){}
void Solution::check()
{
    int var = 14;
    int &ref_var = var;//it cant be null as well as it cant be uninitialized...
    cout << var << " ref value is " << &ref_var << "  " << ref_var << endl; // &ref_Var gives u the address...

    ref_var = 48;
    cout << var << "  "<<ref_var << "   "<<&ref_var <<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    sol.check();
    return 0;
}
