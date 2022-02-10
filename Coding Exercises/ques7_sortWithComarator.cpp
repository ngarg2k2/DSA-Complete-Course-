#include <bits/stdc++.h>
using namespace std;

vector<int> sortingWithComparator(vector<int> a, bool flag)
{
    // your code  goes here
    if (flag == 1)
        sort(a.begin(), a.end());
    else
        sort(a.begin(), a.end(), greater<int>());

    return a;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    bool flag;
    cin >> flag;

    arr = sortingWithComparator(arr, flag);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}