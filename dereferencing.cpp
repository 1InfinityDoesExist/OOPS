/*

& is the reference operator and can be read as “address of”.
* is the dereference operator and can be read as “value pointed by”.

*/



#include<bits/stdc++.h>
using namespace std;

class Solution{
private:
public:
    Solution();
    void dereferencing();
};
Solution::Solution(){}
void Solution::dereferencing()
{
    int x = 5;
    int *ptr_1 = &x;
    cout << *ptr_1 <<endl;

    *ptr_1 = 6;
    cout << *ptr_1 << " ye hey x ka value --->" << x <<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    sol.dereferencing();
    return 0;
}
