#include <iostream>
#include <vector>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
vector<int> bubbleSort(vector<int> arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = true;
                swap(arr[j], arr[j + 1]);
            }
            for (int i = 0; i < arr.size(); i++)
            {
                // cout<<arr[i]<<" ";
            }
            cout << endl;
        }
        if (flag == false)
        {
            return arr;
        }
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

    arr = bubbleSort(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}