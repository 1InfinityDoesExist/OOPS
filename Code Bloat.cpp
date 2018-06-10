#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    void codeBloat();
};
Solution::Solution(){}
void Solution::codeBloat()
{
    string str = "OO7 reporting for duty";
    cout << str << endl; // This is code bloat...instead of just printing
    //cout << "OO7 reporting for duty" << endl; you are storing it int some string file;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    sol.codeBloat();
    return 0;
}
