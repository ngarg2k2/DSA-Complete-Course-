#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    cout << "In fucntion" << endl;
    // int n=sizeof(arr)/sizeof(int);
    arr[0] = 100; // pass by reference
    cout << "n" << n << endl;
    cout << "size of pointer" << sizeof(arr) << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ,";
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    printArray(arr, n);
    // if we only pass printArray(arr);only the adress is passed and in fucntion n=4/4=1;
    cout << "n" << n << endl;
    cout << "In main" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ,";
    }
    cout << endl;
}