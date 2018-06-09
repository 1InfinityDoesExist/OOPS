#include<bits/stdc++.h>
using namespace std;

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
    Solution sol;
    int x = 10;
    cout << "The value of x is :-    " << x <<endl;
    cout << "The address of x is :-   " << &x <<endl;
    int *pter;
    pter = &x;

    cout << "*pter stores the value which is :-    " << *pter <<endl;
    cout << "pter stores the address which is :-   " << pter <<endl;
    cout << "The address of pter itself is :-   " << &pter <<endl;

    int array[] = { 2, 3, 110, 5, 6};
    int *p = array;
    cout << "p is :-   " << p <<endl;
    cout << "*p is :-   " << *p <<endl;

    for(int iter = 0; iter < 5; iter++)
    {
        cout << "p is :-   " << p <<endl;
        cout << "*p is :-   " << ++(*p) <<endl; //increasing the value by one before assiginin to the variable...
        p++;//mvoing the pointer by one....
    }

    return 0;
}
