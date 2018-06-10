#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    void showPrintfScanf();
};
Solution::Solution(){}
void Solution::showPrintfScanf()
{
    char array[100];
    int scanReturn = scanf("%d", array); // type Avinash Patel in terninal
    int printReturn = printf("%s", "Hi! Kiase ho\n");

    cout << scanReturn << endl;
    cout << printReturn << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    sol.showPrintfScanf();
    return 0;
}
