#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    void show(vector<int> &A);
};
Solution::Solution(){}
void print(int data)
{
    cout << data << " ";
}
void Solution::show(vector<int> &A)
{

    // Normal for loop
    for(int iter = 0; iter < A.size(); iter++)
    {
        cout << A[iter] << " ";
    }
    cout << endl;

    //Range based for loop
    for(int iter : A)
    {
        cout << iter << " ";
    }
    cout << endl;

    //for_each for loop
    //1st type
    for_each(A.begin(), A.end(), print);

    //2nd type
    cout << endl;
    for_each(A.begin(), A.end(), [](int i){
        cout << i << " ";

    });

    // last two are same...
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    int n;
    cin >> n;
    vector<int> v;
    for(int iter = 0; iter < n; iter++)
    {
        int data;
        cin >> data;
        v.push_back(data);
    }
    sol.show(v);
    return 0;
}
