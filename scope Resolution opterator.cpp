#include<bits/stdc++.h>
using namespace std;

int k;//by default static so it doest not matter......
int y ;
static int x = 10;
class Solution
{
private:
public:
    Solution();

};
Solution::Solution(){}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    static int x = 20;//whether static or not does not matter....
     y = 45;
     int k = 100;
    cout << "The value of x is :- " << x << endl;
    cout <<"The value of global x is :-" << ::x << endl;//unary scope resolution opterator
    //::x resolve the scope of global varibale....

    cout << "The value of y is :- " << y << endl;
    cout <<"The value of global y is :-" << ::y << endl;

    cout << "The value of k is :- " << k << endl;
    cout <<"The value of global k is :-" << ::k << endl;
    return 0;
}
