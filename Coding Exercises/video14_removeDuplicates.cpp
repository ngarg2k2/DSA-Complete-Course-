#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string str)
{
    int len = str.length();
    string output("");
    for (int i = 0; i < len; i++)
    {
        int j = i + 1;
        if (str[i] != str[j])
        {
            output = output + str[i];
            j++;
        }
    }

    return output;
}
int main()
{
    string s1("geeksforgreek");
    
    sort(s1.begin(), s1.end());
    cout << removeDuplicates(s1) << endl;
    return 0;
}