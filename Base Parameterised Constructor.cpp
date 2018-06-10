#include<bits/stdc++.h>
using namespace std;
//This one is the base class....
class Base
{
private:

public:
     int _x;
    Base(int x) : _x(x){};
    void display()
    {
        cout << _x << endl;
    }
};
//This one is the sub_class or derived class....
class Derived : public Base
{
private:
    int _y;
public:
    Derived(int x, int y) : Base(x), _y(y){};//you can use curly braces as well Base{x} same thing no error...
    void show()
    {
        cout  <<_x <<  " "<< _y <<endl;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Base b(14);
    b.display();
    Derived d(4, 14);
    d.show();

    return 0;
}
