#include<bits/stdc++.h>
using namespace std;


class Base
{
    private:
    public:
        Base();
        int x;
        int y;
        void getData(const int a, const int b);
        void display();//function overriding....
        void display(int x, int y);//This is funciton overloading...
};
Base::Base(){}
void Base::getData(const int a, const int b)
{
    x = a;
    y = b;
}
void Base::display()
{
    cout << "x = " << x << " and " << "y = " << y << endl;
}
void Base::display(int x, int y)
{
    cout << x << " and "<<y << endl;
}
class Derieved : public Base
{
    private:
        int z;
    public:
        Derieved();
        void getData(const int c, const int d, const int e);
        void display();
};
Derieved::Derieved(){}
void Derieved::getData(const int c,const int d, const int e)
{
    z = c;
    x = d;
    y = e;
}
void Derieved::display()
{
    Base::display();
    cout <<"x = " << x << "  and " << "y  = " << y << " and "<<  "z = " <<z << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Base bs;
    Derieved de;
    bs.getData(10, 20);
    bs.display();
    bs.display(20, 30);
    de.getData(20, 10, 40);
    de.display();
    return 0;
}
