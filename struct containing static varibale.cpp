#include<bits/stdc++.h>
#pragma pack(1)
using namespace std;

 struct shikher{
    string name; // gets memory in stack....24 byte...
    int age;
    int weight;
    int height;
    static int telphone; //gets memory in data segment....
} ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  //  shikher * buddy = (shikher *)malloc(sizeof(shikher)); // uncomment and see...
    shikher buddy;
    buddy.name = "Chitransh";
    buddy.age = 18;
    buddy.weight = 45;
    buddy.height = 5;
  //  buddy.telephone = 78; // error because there is no telephone in stack...

    cout << buddy.name << endl;
    cout << sizeof(buddy) <<endl;

    return 0;
}
