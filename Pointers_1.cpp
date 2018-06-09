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
    int x;
    cout << &x << endl;

    int y = 10;
    int *ptr = &y;
    cout << "The address of y is " << &y <<endl;
    cout << "The address of ptr is " << &ptr << endl;
    cout << "Output for *ptr is " << *ptr <<endl; // prints the value;
    cout << "Output for the ptr is " <<ptr << endl; // prints the address;
    return 0;
}
