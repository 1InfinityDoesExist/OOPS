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
    cout << "I am the base class" <<endl;
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
    cout << "I am the sub_class" <<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //Inorder to call base class function...you have to use pointer too...
    Base *b = new Base();
    b->display();

    //Inorder to call the derieved call function ...you have to call it using base class pointer....
    Base *ptr = new Derieved();
    ptr->display();
    return 0;
}
