
#include<iostream>
using namespace std;

class Test
{
private:
    static int x;
public:
    Test();
    static int y;
    void sikho(int x);
};
Test::Test(){}
void Test::sikho(int x)
{
       cout << "Value of static x is " << Test::x;

       cout << "\nValue of local x is " << x;
}
int Test::x = 1;
int Test::y = 2;

int main()
{
    Test obj;
    cout << sizeof(obj) << endl; // because class is never empty...
    int x = 3 ;

    obj.sikho(x);
    return 0;
}
