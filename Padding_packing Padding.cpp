#include<bits/stdc++.h>
using namespace std;
#pragma pack(1)
struct Bebo
{
    //computer read 4 byte at a time so 1 2 3 4 1 2 3 4 ----> 8 byte integer itself need fresh 4byte.
    //                                  A S B   from here for integer  4th is wasted...because int requires 4 byte 4th is one
    //byte so computer searches for new(fresh) 4 bye so 4th is wasted....wasted in the sense booked(reserved) but will not be used.
    char A;//1 byte
    char S;//1 byte
    char B;//i byte
    int a; // 4 byte
    //comment int a...then see..you will get 3 byte. 1+1+1 -> 3;

    //after you add #pragma pack(1) you will see 7 (1+1+1+4)
};
struct bebo
{
    int a; // 4 byte
    char A; // 4->1
    char S; //4->2
    char k; //4->3
    char sk;//4->4
    char ssk; //new 4 byte computer read so 4->1 and rest left as usual...so 4 + 4 + 4 -> 12

    //after you add #pragma pack(1) you will see 9 (4+1+1+1+1+1)
};
struct aakarsh
{
    int Ad; // 4
    int Ne; //4
    int An; //4
    int Av; // 4 altogether 16
    char chirkut;// computer reads 4byte but uses only 1 byte..rest 3 is padding and begin wasted.... sum = 20
    //This is padding effect....to overcome this padding effect to save space we do packing...simple just add
    // #pragma pack 1 thats it....
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << sizeof(Bebo) << endl;
    cout << sizeof(bebo) <<endl;
    cout << sizeof(aakarsh) <<endl;
    return 0;
}
