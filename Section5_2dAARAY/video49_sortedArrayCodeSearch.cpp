//doubt
#include <bits/stdc++.h>
using namespace std;
pair<int, int> sortedSearch(int a[100][100], int n, int m, int key)
{
    if (key < a[0][0] or key > a[n - 1][m - 1])
    {
        return {-1, -1};
    }
    int i = 0;
    int j = m - 1;
    while (i <= n - 1 and j >= 0)
    {
        if (a[i][j] == key)
        {
            return {i, j};
        }
        else if (key > a[i][j])
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    // return {-1, -1};
}
int main()
{
    int arr[100][100];
    int n, m;
    cin >> n >> m;
    int key;
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    pair<int, int> cord = sortedSearch(arr, n, m, key);
    cout << cord.first << " " << cord.second << endl;
    return 0;
}