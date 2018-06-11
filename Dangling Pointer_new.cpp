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
    int *ptr1 = new int();
    int *ptr2 = ptr1;
    cout << *ptr2 << endl;
   free(ptr2);
   ptr2 = NULL;
    cout << *ptr2 << endl;
    return 0;
}
