#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();

};
Solution::Solution(){}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int x = 10;
    int &Refx = x;
//when a variable is declared as reference it becomes a alternative name for the existing variable...
    x = 20;
    Refx = 30;
    cout << " The value of x is x : " << x << endl;
    cout << " The value of Refx is : " << Refx<< endl;

    cout << "The address of x is " << &x << endl;
    cout << "The address of Refx is " << &Refx << endl;
    return 0;
}
