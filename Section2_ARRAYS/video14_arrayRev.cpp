#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reverseArray(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 5, 6, 9, 4, 2, 7};
    int n = sizeof(arr) / sizeof(int);
    display(arr, n);
    reverseArray(arr, n);
    display(arr, n);
    return 0;
}