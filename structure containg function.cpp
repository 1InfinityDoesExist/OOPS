#include<bits/stdc++.h>
using namespace std;

struct shikher{
    int x;
    int y;
    void add();
};
void shikher :: add(){
    cout << "May hu shikher" <<endl;
    return;
}
struct bikey : shikher{
    void add();
};
void bikey::add(){
    cout << "Jai Mahesmati....!!!" <<endl;
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    shikher sh;
    sh.add();

    bikey bk;
    bk.add();
    return 0;
}
