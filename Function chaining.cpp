#include<bits/stdc++.h>
using namespace std;

class Base
{
private:
    int _var, _tar;
public:
    Base();
    Base &setDataVar(int var)
    {
        _var = var;
        return *this;
    }
    Base &setDataTar(int tar)
    {
        _tar = tar;
        return *this;
    }
    void print()
    {
        cout << _var<< " " << _tar << endl;
    }
};
Base::Base(){}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Base b;
    b.setDataVar(2).setDataTar(14).print();
    return 0;
}
