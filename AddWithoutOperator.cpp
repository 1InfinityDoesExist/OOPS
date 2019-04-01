#include <iostream>
using namespace std;

class Solution{
    private:
  public:
    Solution();
    int addWithoutUsingOperatory(int a, int b);
    
};
Solution::Solution(){}
int Solution :: addWithoutUsingOperatory(int a, int b){
    if(a == 0){
       return b;
   }
   if(b == 0){
       return a;
   }
   
   while(b != 0){
       int add = a ^ b;
       int carry = (a & b) << 1;
       a = add;
       b = carry;
   }
   return a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
   int x, y;
   cin >> x >> y;
   
   cout << sol.addWithoutUsingOperatory(x, y);
   
    return 0;
}
