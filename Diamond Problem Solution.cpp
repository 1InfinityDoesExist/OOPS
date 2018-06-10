#include<bits/stdc++.h>
using namespace std;

class A
{
private:
public:
    A();
    int _a;
};
A::A(){}

class B : virtual public A
{
private:
public:
    B();
    int _b;
};
B::B(){}

class C : virtual public A
{
private:
public:
    C();
    int _c;
};
C::C(){}

class D : public B, public C
{
private:
public:
    D();
    int _d;
};
D::D(){}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    D d;
    d._a = 2;// if no virtual you will get error....
    d._b = 4;
    d._c = 14;
    d._d = 24;

    cout << d._a << " " << d._b <<" "<< d._c<<" "<< d._d <<endl;
    return 0;
}
