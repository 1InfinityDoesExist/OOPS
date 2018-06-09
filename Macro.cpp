#include<bits/stdc++.h>
using namespace std;

#define MAXI(a, b) (a > b) ? a : b
#define SWAP(a, b) do{         \
                        a ^= b; \
                        b ^= a; \
                        a ^= b; \
                    }while(0)
class Solution
{
private:
public:
    Solution();
    void maxElement(int x, int y);
};
Solution::Solution(){}
void Solution::maxElement(int x, int y)
{
    int maxi = MAXI(x, y);
    cout << maxi << endl;

    SWAP(x, y);
    cout << x << " "<< y;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int k = 10;
    int l = 20;
    SWAP(k, l);
    sol.maxElement(5, 10);
    return 0;
}
