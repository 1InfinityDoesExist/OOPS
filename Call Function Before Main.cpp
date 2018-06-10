#include<bits/stdc++.h>
using namespace std;

void func()
{
    cout << "Main say v pehle" <<endl;
    return;
}
class Base
{
private:
public:
    Base();

};
Base::Base()
{
    func();
}
Base b;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << " May hu main" <<endl;

    return 0;
}
