#include<bits/stdc++.h>
using namespace std;


template<typename T1, typename T2>auto add(T1 a, T2 b)->decltype(a+b)
{
    return (a+b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << add(1, 1.8) << endl; // will get 2.8 that's fine...
    cout << add(1.8, 1) << endl; // will get 2 what is the reason...
 // This is because of template<typename T1, typename T2>T2 this T2 the return type will depend on this T2 if you
 //put here T1 return type will depend on that T1 what ever the data type the T1 is return type will also be of that type...
    return 0;
}
