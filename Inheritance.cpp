
#include<bits/stdc++.h>
using namespace std;

class Animal
{
    private:
    public:
        Animal();
        int leg = 4;
        int tail = 1;
        void showSomething();
};
Animal::Animal(){}
class Dog : public Animal
{
    private:
    public:
        Dog();
        int eyes = 2;
        int nose = 1;
        void showSomething();
};
Dog::Dog(){}
void Animal::showSomething()
{
    cout << "They have two legs = " << leg << " "<< tail << " "<<endl;
}
void Dog::showSomething()
{
    cout << "They have " << leg << " "<< tail << " "<< eyes << " " << nose << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Animal an;
    Dog dg;

        an.showSomething();
        dg.showSomething();
        cout << dg.leg<< endl;

    return 0;
}
