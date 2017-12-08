//funciton overloading........
//polymorphism.........


#include<bits/stdc++.h>
using namespace std;


class Solution
{
    private:
    public:
        Solution();
        void summation(int x, int y);
        void summation(double x, double y, double z);
        void summation(int x1, double y);
};
Solution::Solution(){}
void Solution::summation(int x, int y)
{
    cout << x+y<<endl;
}
void Solution::summation(double x, double y, double z)
{
    cout << x+y+x<<endl;
}
void Solution::summation(int x1, double y)
{
    cout << x1+y <<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution sol;
    sol.summation(10, 20);
    sol.summation(2.0, 3.0, 2.30);
    sol.summation(10, 0);
    return 0;
}
