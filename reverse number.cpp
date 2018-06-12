#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    void reverse_number(int num);
};
Solution::Solution(){}
void Solution::reverse_number(int num)
{
    int rev_number (0);
    while(num != 0)
    {
        int rem = num%10;
        rev_number = rev_number *10 + rem;
        num /= 10;
    }
    cout << rev_number;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int num;
    cin >> num;
    sol.reverse_number(num);
    return 0;
}
