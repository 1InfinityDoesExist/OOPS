#include<bits/stdc++.h>
using namespace std;

int x = 100;
class Solution
{
private:
public:
    Solution();
    void print();
};
Solution::Solution(){}
void Solution::print()
{
    int x = 50;
    cout << "This is uppar wala x --- > " << x << endl;
    cout << "Global wala x -----> " << ::x << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    sol.print();
    return 0;
}
