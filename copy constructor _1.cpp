#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int x;
public:
    Solution() : x(0){};
    int getX();
};
int Solution::getX()
{
    return x;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj1;
    cout << obj1.getX() << endl;

    Solution obj2 = obj1;
    cout << obj2.getX() << endl;

    Solution obj3;
    obj3 = obj1;
    cout << obj3.getX() << endl;
    return 0;
}
