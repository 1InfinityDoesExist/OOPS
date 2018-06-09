#include<bits/stdc++.h>
using namespace std;

struct Employee
{
    int rollid;
    const char *firstName;
    const char *email;
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Employee Tillu = { 48, "RishabShrivas", "kudhPuchlow"};
    Employee *shikher = &Tillu;
    cout << Tillu.rollid << "  "<< Tillu.firstName << " "<<Tillu.email <<endl;

    return 0;
}
