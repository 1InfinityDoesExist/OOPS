#include<bits/stdc++.h>
using namespace std;

class Base
{
private:
public:
    Base();
    virtual void show() = 0; // pure virtual function..
    //pvf is a function with no definations. They start with virtual keyword and ends with 0;
};
Base::Base(){}
class Derived : public Base
{
private:
public:
    Derived();
    void show();
};
Derived::Derived(){}
void Derived::show()
{
    cout << "OO7 reporting for duty" << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Base *bptr;
    /*
    This is error part
    Base b; // Compile time error....
    b.show();

    bptr->show();
    */
    Derived d;
    bptr = &d;
    bptr->show();
    return 0;
}
