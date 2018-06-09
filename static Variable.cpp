#include<bits/stdc++.h>
using namespace std;

int a;
int b = 10;
static int s;
static int k = 20;

class Solution
{
private:
public:
    Solution();
    int add(int x, int y);
    int adding(int p);
};
Solution::Solution(){}
int Solution::add(int x, int y)
{

    cout << " Me is in first add" <<endl;

    cout << " a is -->" <<a <<endl;
    cout << " b is -->" <<b <<endl;
    cout << " s is -->" <<s <<endl;
    cout << " k is -->" <<k <<endl;

    int a = 20;
    static int s = 100;
    return x+::a+y+::s;//s is global one as well as a is also the global one.....
}
int Solution::adding(int p)
{
    k = add(10, 10);
    return k+p;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int ans = sol.add(10, 10);
    cout << "final answer is -----> "<< ans << endl;
    int adding_ans = sol.adding(10);
    cout << "ye hey second ka answer---->" <<adding_ans << endl;
    return 0;
}
