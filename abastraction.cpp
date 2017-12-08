#include<bits/stdc++.h>
using namespace std;


class Solution
{
    private:
        int x, y;
    public:
        Solution();
        void getInput(int a, int b);
        void display();
};
Solution::Solution(){}
void Solution::getInput(int a, int b)
{
    x = a;
    y = b;
}
void Solution::display()
{
    cout << " x =  " << x << " and  "<<"y = " << y <<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    sol.getInput(10, 20);
    sol.display();
    return 0;
}
