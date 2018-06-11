#include<bits/stdc++.h>
using namespace std;


class Solution
{
private:
public:
    Solution();
    void memoryAccessViolation();
};
Solution::Solution(){}
void Solution::memoryAccessViolation()
{
    int *ptr = NULL;
    *ptr = 10; // no memory allocated and you are trying to change the value of that memory..which does not even exist...
    cout << *ptr << endl; // that is why program terminated...saying segmentation fault...
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    sol.memoryAccessViolation();
    return 0;
}
