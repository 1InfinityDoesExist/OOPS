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
    int array[6] = { 4, 8 , 6, 10, 8, 7};
    int *ptr = array;

    cout << "The value of *ptr is " << *ptr << endl;
    cout << "The value of ptr is " << ptr << endl;
    cout << "The value of array is " << array << endl;


    cout << endl;
    cout << endl;

    for(int iter = 0; iter < 6; iter++)
    {
       cout << (*ptr)++ << endl;
    }
    for(int iter = 0; iter < 6; iter++)
    {
       cout << (*ptr) << endl;
       ptr++;
    }


    return 0;
}
