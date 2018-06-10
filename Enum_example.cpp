//use enum where you are dealing with some limited set of values
#include<bits/stdc++.h>
using namespace std;


enum class Days {sunday, monday, tuesday, wednesday, thursday, friday, saturday};

class Solution
{
private:
public:
    Solution();
    void func(Days d);
};
Solution::Solution(){}
void Solution::func(Days d)
{
    switch(d)
    {
    case Days::sunday:
        cout << "Sunday hey Bay" <<endl;
        break;
    case Days::monday:
        cout << "Monday hey Bay" <<endl;
        break;
    case Days::tuesday:
        cout << "Tuesday hey Bay" <<endl;
        break;
    case Days::wednesday:
        cout << "Wednesday hey Bay" <<endl;
        break;
    case Days::thursday:
        cout << "Thursday hey Bay" <<endl;
        break;
    case Days::friday:
        cout << "Friday hey Bay" <<endl;
        break;
    case Days::saturday:
        cout << "Saturday hey Bay " <<endl;
        break;
    default:
        cout << "default" <<endl;
        break;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;

    Days d = Days::wednesday;
    sol.func(d);
    return 0;
}
