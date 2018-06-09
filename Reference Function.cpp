//& changes the value....you give apple you will get orange...
//error and solution both mentioned below...

#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    void check();
    int &func(int &iter);
    const int &function_new(const int &jter);

};
Solution::Solution(){}
const int &Solution::function_new(const int &jter)//This is the solution...send 5 do some work and return but don't change the 5
{
    static int yter = jter;
    yter++;
    return yter;
}
int &Solution::func(int &iter)
{
    iter++;
    return iter;
}
void Solution::check() // This is the drawback.....gaya tha 5 aaayga 6.....
{
    int iter = 5;
    cout << "Before Function call ---->" << iter <<endl;
    func(iter);
    cout << "After Function Call   ---->" << iter << endl;

    int jter = 5;
    cout << "Before Function call ---->" << jter <<endl;
    cout << function_new(jter) << endl;;
    cout << "After Function Call   ---->" << jter << endl;

    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    sol.check();
    return 0;
}
