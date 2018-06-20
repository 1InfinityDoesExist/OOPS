/*                         Declaration    Definition    Tentative Definition   Initialized
int i;   (inside a block)    Yes           Yes                No                No
int i=5; (inside a block)    Yes           Yes                No               Yes(to 5)
int i;   (otherwise)         Yes            No               Yes               Yes(to 0)
int i = 20;   (otherwise)    Yes            No               Yes               Yes(to 20)
extern int i;                Yes            No                No                No


All definitions are declarations but not vice-versa.
*/

#include<bits/stdc++.h>
using namespace std;


int x; // Declaration
static int bebo = 25; // declaration ...remember it is not defination...
static int k;

extern int bahar;
class Solution{
private:
public:
    Solution();
    void Display();
    void staticStatement();

};
Solution::Solution(){}
void Solution::Display(){
    //Below is called block statement...it is inside a block...
    {
        int y; // Declaration and defination but no initialization
        int z = 20; // Declaration and Defination but initialized as well..
        cout << y << "   "<<z << endl;// y ko milaga ga  garbage value....
        cout << "The value of x is.." << x << endl;
    }
}
void Solution::staticStatement(){
    int bebo = 2;
    cout << "This is bebo static ke aandar wala ka value..." << bebo <<endl;
    cout << "The value of bebo outside this block is " << ::bebo << endl; // scope resolution operator...
    cout << "The value of static k is " << k << endl;
    //cout << "The extern is " << bahar << endl; // compile error because no memory being allocated to bahar...
    // you can see it useing &bahar ...you will see no memory has been allocated to it....

    // :: resolve the scope of global variable...
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    sol.Display();
    sol.staticStatement();
    return 0;
}
