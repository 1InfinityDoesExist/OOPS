#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    void add(int a, int b);
    int add(int a, int b, int c);// return type can be same or different but signature must be different.
    void add(int a, double b);
};
Solution::Solution(){}
void Solution::add(int a, int b)
{
    cout <<  a+b <<endl;
    return;
}
int Solution::add(int a, int b, int c)
{
    return a+b;
}
void Solution::add(int a, double b)
{
    cout << a+b << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    sol.add(5, 6);
    int x = sol.add(6, 14, 2);
    cout << x << endl;
    sol.add(5, 5.25);
    return 0;
}
