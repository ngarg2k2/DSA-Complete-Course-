#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;
bool arePermutation(string s1, string s2)
{
    int l1 = s1.length();
    int l2 = s2.length();

    if (l1 != l2)
    {
        return false;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    for (int i = 0; i < l1; i++)
    {
        if (s1[i] != s2[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s1("test");
    string s2("ttsw");

    if (arePermutation(s1, s2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}