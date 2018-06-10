#include<bits/stdc++.h>
using namespace std;

class Base
{
private:
    int _x;
public:
    Base();
    Base(int x) : _x(x){} // Till this line you can copy object1 to object2 using obj1 = obj2....
    //To avoid one object to copy data from another object...
    Base(const Base &obj) = delete;
    Base &operator = (const Base &rhs) = delete;

};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Base b1(10);
   // Base b2 = b1;//No problem if public last two line is commented....
    Base b2 = b1; // give you error saying you cannot copy base 1 into base 2....
    return 0;
}
