#include<bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    Solution();
    void reverse_string(string str);
};
Solution::Solution(){}
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
void Solution::reverse_string(string str)
{
    string str1 = str;
    //first method
    reverse(str.begin(), str.end());
    cout << str << endl;

    int start (0);
    int end = str.length()-1;
    while(start < end)
    {
        swap(&str1[start++], &str1[end--]);
    }
    cout << str1 <<end;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution sol;
    string str = "Avinash Patel";
    sol.reverse_string(str);
    return 0;
}
