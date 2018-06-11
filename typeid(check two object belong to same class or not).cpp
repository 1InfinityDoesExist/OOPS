#include<bits/stdc++.h>
using namespace std;


class Solution
{
private:
public:
    Solution();
};
Solution::Solution(){}

class Tolution
{
private:
public:
    Tolution();
};
Tolution::Tolution(){}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol1, sol2;
    Tolution tol1, tol2;

    if(typeid(sol1) == typeid(sol2))// if you remove typeid it will give you error...
    {
        cout << "Ham Sam Class ke hey" << endl;
    }
    else
    {
        cout << "Ham Different Class Ke Hey" <<endl;
    }


    if(typeid(sol1) == typeid(tol2))// if you remove typeid it will give you error...
    {
        cout << "Ham Sam Class ke hey" << endl;
    }
    else
    {
        cout << "Ham Different Class Ke Hey" <<endl;
    }
    return 0;
}
