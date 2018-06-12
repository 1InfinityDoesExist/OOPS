#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    int hcf(vector<int> &A);
    int lcm(vector<int> &A);
};
Solution::Solution(){}
int gcdHCF(int a, int b)
{
    if(a == 0)
    {
        return b;
    }
    return gcdHCF(b%a, a);
}
int gcdLCM(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    return gcdLCM(b, a%b);
}
int Solution::hcf(vector<int> &A)
{
    int result = A[0];
    for(int iter = 1; iter < A.size(); iter++)
    {
        result = gcdHCF(result, A[iter]);
    }
    return result;
}
int Solution::lcm(vector<int> &A)
{
    int result = A[0];
    for(int iter = 0; iter < A.size(); iter++)
    {
        result = (result * A[iter])/gcdLCM(result, A[iter]);
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int n;
    cin >> n;
    vector<int> v;
    for(int iter = 0; iter < n; iter++)
    {
        int data;
        cin >> data;
        v.push_back(data);
    }
    int ans = sol.hcf(v);
    cout << ans << endl;
    int an = sol.lcm(v);
    cout << an << endl;
    return 0;
}
