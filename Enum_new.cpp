#include<bits/stdc++.h>
using namespace std;


enum class Color {red, green, blue};

class Solution
{
private:
public:
    Solution();
    void func(Color c);
};
Solution::Solution(){}
void Solution::func(Color c)
{
    switch(c)
    {
    case Color::red:
        cout << "Red" <<endl;
        break;
    case Color::blue:
        cout << "Blue" <<endl;
        break;
    case Color::green:
        cout <<"Green"<<endl;
        break;
    default:
        cout << "Kuch Nahi hey" <<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    Color c = Color::red;
    sol.func(c);
    return 0;
}
