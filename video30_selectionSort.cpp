#include <iostream>
#include <vector>

using namespace std;

vector<int> selectionSort(vector<int> arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int min_ele=i;
        for (int j = i; j < arr.size(); j++)
        {
            if (arr[j] < arr[min_ele])
            {
                min_ele=j;
            }
        }
            swap(arr[i],arr[min_ele]);
            for (int i = 0; i < arr.size(); i++)
            {
                // cout << arr[i] << " ";
            }

            cout << endl;
    }
    return arr;
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

    arr = selectionSort(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}