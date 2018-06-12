#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    void binary(int x);
};
Solution::Solution(){}
void Solution::binary(int x)
{
    int y = x;
    string str = "";
    while(x != 0)
    {
        str = (x%2 == 0 ? "0" : "1" ) + str;
        x = x/2;
    }
    cout << str << endl;

    string binary = bitset<8>(y).to_string();
    binary.erase(0, binary.find_first_not_of('0'));
    cout << binary << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int x;
    cin >> x;
    sol.binary(x);
    return 0;
}
