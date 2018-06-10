#include<bits/stdc++.h>
using namespace std;

class Base
{
private:
    int _x, _y;
public:
    Base() : Base(0, 0){}
    Base(int a) : Base(a, 0){}
    Base(int a, int b) : _x(a), _y(b){}
    void print();
};
void Base::print()
{
    cout << _x << " "<< _y <<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Base b1;
    b1.print();
    Base b2(2);
    b2.print();
    Base b3(4, 14);
    b3.print();
    return 0;
}
