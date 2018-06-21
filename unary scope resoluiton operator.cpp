//unary scope resolution operator ( :: ) to access a global variable when a local variable of the same name is in scope

#include<bits/stdc++.h>
using namespace std;

int x = 5;
class Solution{
private:
public:
    Solution();
    void unary_scope_resolution();
};
Solution::Solution(){}
void Solution::unary_scope_resolution(){
    int x = 20;
    cout << ::x << endl;// This is unary scope resolution operator...
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;

    sol.unary_scope_resolution();
    return 0;
}
