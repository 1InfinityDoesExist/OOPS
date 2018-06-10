#include<bits/stdc++.h>
using namespace std;

class Base
{
private:
public:
    Base();
    virtual void display();
};
Base::Base(){}
void Base::display()
{
    cout << "May hu base class" <<endl;
}

class Derived : public Base
{
private:
public:
    Derived();
    void display();
};
Derived::Derived(){}
void Derived::display()
{
    cout << "May hu derived class" <<endl;
}

void func(Base *obj) // after passing it will become Base *obj = new Base;
{
    obj->display();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    func(new Base);// function called at compile time...
    func(new Derived); // function called at runtime...
    return 0;
}
