#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    void dekho();
};
Solution::Solution(){}
void Solution::dekho()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    cout << "The size of vector ---->" << v.size() <<endl;
    cout << " The capacity of vector is " << v.capacity() <<endl; // computer reads 4 bytes and after every full fill ment of 4
                                       //it increases the size by 2 * previous size i.e 4
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    cout << "The size of vector ---->" << v.size() <<endl;
    cout << "The capacity of vector is " << v.capacity() <<endl;
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    cout << "The size of vector ---->" << v.size() <<endl;
    cout << "The capacity of vector is " << v.capacity() <<endl;
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    cout << "The size of vector ---->" << v.size() <<endl;
    cout << "The capacity of vector is " << v.capacity() <<endl;
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    cout << "The size of vector ---->" << v.size() <<endl;
    cout << "The capacity of vector is " << v.capacity() <<endl;
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    cout << "The size of vector ---->" << v.size() <<endl;
    cout << "The capacity of vector is " << v.capacity() <<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    sol.dekho();
    return 0;
}
