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

tuple<int, char, string> fun(bool flag)
{
    if(flag)
    {
        return make_tuple(1, 'x', "Rupesh");
    }
    else
    {
        return make_tuple(2, 'y', "Rakesh");
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    char code;
    string str;

    tie(num, code, str) = fun(true);
    cout << num <<" " << code <<"  "<< str<<endl;


    values v;
    v = func(true);
    cout << v.id << " " << v.name << "  "<< v.email << endl;
    return 0;
}
