#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    void danglingPointerDemo();
};
Solution::Solution(){}
void Solution::danglingPointerDemo()
{
    int *ptr = (int *)malloc(sizeof(int));
    cout << *ptr << "  "<<ptr <<endl;
    ptr = NULL;
    free(ptr);

    *ptr = 3; // This is what we call it a dangling pinter..
    // when a pointer variable in a stack but no memory in heap....
    //System crashed.suddenly...
    cout << *ptr << " "<< ptr <<endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    sol.danglingPointerDemo();
    return 0;
}
