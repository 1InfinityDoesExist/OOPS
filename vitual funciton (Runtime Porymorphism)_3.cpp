#include<bits/stdc++.h>
using namespace std;

class A_base
{
private:
public:
    A_base();
     virtual void display();
};
A_base::A_base(){}
void A_base::display()
{
    cout << "I am the A_base class" <<endl;
}

class B_sub : public A_base
{
private:
public:
    B_sub();
    void display();//no need to declare it virtual it is virtual...as it has been derived from base class....
    void show();
};
B_sub::B_sub(){}
void B_sub::display()
{
    cout << "I am the B_sub class" <<endl;
}
void B_sub::show()
{
    cout << "May B_sub may hu...and i am not the virtual one"<<endl;
}
class C_sub : public B_sub
{
private:
public:
    C_sub();
    void display();//no need to declare it virtual it is virtual...as it has been derived from base class....
};
C_sub::C_sub(){}
void C_sub::display()
{
    cout << "I am the C_sub class" <<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


  //  B_sub *ptr = new C_sub;
  //or you can write it like this...
    C_sub c;
    c.display();
    B_sub *ptr = &c;
    ptr->display();

    A_base *p = new B_sub;
    p->display();

    A_base *pt = new A_base;
    pt->display();


    ptr->show();





    return 0;
}
