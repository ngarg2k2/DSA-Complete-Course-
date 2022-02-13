#include <bits/stdc++.h>
using namespace std;
int binaryStringToNumber(string s)
{
    int ans = 0;
    int num = stoi(s);
    // cout<<num<<endl;
    int base = 1;
    while (num)
    {
        int rem = num % 10;
        num = num / 10;
        ans = ans + rem * base;
        base = base * 2;
    }
    return ans;
}
int main()
{
    string s("100001");
    cout << binaryStringToNumber(s) << endl;
    return 0;
}