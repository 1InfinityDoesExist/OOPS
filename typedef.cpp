#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;
typedef unsigned char uc;

struct score
{
    ull p;
    uc r;
};

class Solution
{
private:
    ull x;
    uc k;
public:
    Solution();
    void insertValue(ull, uc);
};
Solution::Solution(){}
void Solution::insertValue(ull xValue, uc kValue)
{
    x = xValue;
    k = kValue;

    cout << x << " "<< k;
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    sol.insertValue(5, 'N');

    score s = { 25, 'N'};
    cout << "Score and Points are :- " << s.p << " "<< s.r;
    return 0;

}
