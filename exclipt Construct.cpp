#include<bits/stdc++.h>
using namespace std;

class Base
{
private:
    int _var;
public:
    Base();
    Base(int var):_var(var){}
    void print();
};
Base::Base(){}
void Base::print()
{
    cout << _var << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Base b(100);
    b.print();
    return 0;
}
