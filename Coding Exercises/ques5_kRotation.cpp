#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

vector<int> kRotate(vector<int> a, int k)
{
    // your code  goes here
    // vector<int> b[a.size()];
    while (k--)
    {

        for (int i = a.size()-1; i > 0; i--)
        {
            swap(a[i], a[i - 1]);
        }
    }
    return a;
}

int main()
{
    vector<int> arr(5);

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    arr = kRotate(arr, x);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i]<<" ";
    }
}