#include<bits/stdc++.h>
using namespace std;

class Base
{
private:
    int _x;
public:
    Base(int _x):_x(_x){};
    void print_val()
    {
        cout << _x << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Base b(14);
    b.print_val();
    return 0;
}
