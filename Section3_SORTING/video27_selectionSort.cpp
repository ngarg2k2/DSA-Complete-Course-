#include <iostream>
#include <vector>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

vector<int> insertionSort(vector<int> arr)
{
    for (int i = 0; i < arr.size()-1; i++)
    {

        for (int j = 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
            for (int i = 0; i < arr.size(); i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
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

    arr = insertionSort(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}