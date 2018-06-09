#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    void memoryLeak();
};
Solution::Solution(){}

//Memory leaf occur when programmer create a memory in heap and forget to delete it .........
void Solution::memoryLeak()
{
    int sz (5);
    int *ptr = (int *)malloc(sizeof(int) * sz);
    for(int iter = 0; iter < sz; iter++)
    {
        ptr[iter] = iter;
        cout << ptr[iter] << " ";
    }

    //if you don't free the allocated memory it is called memory leaked...
    //to solve it just free the allocated memory...

    free(ptr); // now no memory leak
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    sol.memoryLeak();
    return 0;
}
