// final
//Sometimes you don’t want to allow derived class to override the base class’ virtual function

#include<bits/stdc++.h>
using namespace std;

//Base class
class Base{
private:
public:
    Base();
    virtual void display() final;
};
Base::Base(){}
void Base::display(){
    cout << "May hu base class" <<endl;
}

//Derived class

class Derived:public Base{
private:
public:
    Derived();
    void display();//after adding final you cannot override the method...
};
Derived::Derived(){}
void Derived::display(){
    cout << "May hu derived class" <<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Base *b = new Derived();
    b->display();
    return 0;
}
