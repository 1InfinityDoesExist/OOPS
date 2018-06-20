#include<bits/stdc++.h>
using namespace std;

struct  Base
{
    virtual void display();
};

void Base::display()
{
    cout << "I am the base class" <<endl;
}

struct  Derieved : public Base
{
    void display();
};

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
