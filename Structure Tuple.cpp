#include<bits/stdc++.h>
using namespace std;


struct values
{
    int id;
    const char *name;
    const char *email;
};
values func(bool flag)
{
    if(flag)
    {
        return values { 4, "bebli", "bebli.com"};
    }
    else
    {
        return values {5, "dips", "dips.com"};
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    values v;
    v = func(true);
    cout << v.id << " " << v.name << "  "<< v.email << endl;
    return 0;
}
