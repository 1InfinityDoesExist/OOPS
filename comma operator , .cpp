#include<bits/stdc++.h>
using namespace std;

int func()
{
    return 1,2,3;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int v1, v2;
    v1 = 2,4,14;
    v2 = (2, 4, 14);
    cout << v1 << endl; //(first element)
    cout << v2 << endl; //reads last element unless it find ")"....
    cout << func() << endl;// same as above....
    return 0;
}
