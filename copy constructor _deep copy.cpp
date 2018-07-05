#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int *x;
    int N;
public:
    Solution() : x(NULL){};

    //default copy constructor...
    Solution(const Solution &obj)
    {
        this->N = obj.N;
        x = new int[this->N];
    }
    // =operator...
    void operator= (const Solution &obj)
    {
        this->N = obj.N;
        x = new int[this->N];
    }

    void allocate(int N);
    int getX();
    ~Solution()
    {
        delete []x;
    }
};
void Solution :: allocate(int N)
{
    this->N = N;
    x = new int[this->N];
}
int Solution::getX()
{
    return x[0];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj1;
    obj1.allocate(14);
    cout << obj1.getX() << endl;

    Solution obj2 = obj1;
    cout << obj2.getX() << endl;

    Solution obj3;
    obj3 = obj1;
    cout << obj3.getX() << endl;

    return 0;
}

