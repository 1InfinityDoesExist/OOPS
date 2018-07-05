#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int *x;
    int N;
public:
    Solution() : x(NULL){};
    void allocate(int N);
    int getX();
    ~Solution()
    {
        delete []x;
    }
};
void Solution :: allocate(int N)
{
    this->N = N;
    x = new int[this->N];
}
int Solution::getX()
{
    return x[0];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj1;
    obj1.allocate(14);
    cout << obj1.getX() << endl;

    Solution obj2 = obj1;   //creates dangling and memory leak problem...
    cout << obj2.getX() << endl;


    Solution obj3; //memory leak and dangling pointer problem...
    obj3 = obj1;
    cout << obj3.getX() << endl;
    return 0;
}
/*
The default copy constructor and overloaded = operator function will copy the pointers and value of N of one object
to another object. Which will lead to memory leak and dangling reference issues.
*/
