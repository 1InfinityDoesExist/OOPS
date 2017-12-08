//function overriding

#include<bits/stdc++.h>
using namespace std;


class Base
{
    private:
    public:
        Base();
        void display();
};
Base::Base(){}
void Base::display()
{
    cout << "May hu Base class" <<endl;
}
class Derieved : public Base
{
    private:
    public:
        Derieved();
        void display();
};
Derieved::Derieved(){}
void Derieved::display()
{
    Base::display();
   // cout << "My hu derieved Class" <<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Derieved dev;
    dev.display();
    return 0;
}
