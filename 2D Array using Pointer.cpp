#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    void display(int (*arr)[3]);
};
Solution::Solution(){}
void Solution::display(int (*arr)[3])
{
   /* for(int iter = 0; iter < 5; iter++)
    {
        for(int jter = 0; jter < 3; jter++)
        {
            cout << arr[iter][jter] << " ";
        }
       cout << endl;
    }*/
    cout << "To print the first element :-  " << *(*(arr))<< " " << "Ye hey wo" <<endl;

    cout << endl;
    for(int iter = 0; iter < 5; iter++)
    {
        for(int jter = 0; jter < 3; jter++)
        {
            cout << *(*(arr+iter)+jter) << " ";
        }
       cout << endl;
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;

    int arr[5][3] = { { 44, 50, 16}, { 14, 50, 46}, { 41, 25, 66}, { 84, 55, 26}, { 74, 85, 66} };
    for(int iter = 0; iter < 5; iter++)
    {
       for(int jter = 0; jter < 3; jter++)
       {
           cout << arr[iter][jter] << " ";
       }
       cout << endl;
    }
    sol.display(arr);
    return 0;
}
