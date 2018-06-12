#include<bits/stdc++.h>
using namespace std;

class Base final //you will get error because you are not allowed to inherit ...after using final....
{
private:
public:
    Base();
};
Base::Base(){}

class Derived:public Base
{
private:
public:
    Derived();
};
Derived::Derived(){}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Base b;
    return 0;
}
