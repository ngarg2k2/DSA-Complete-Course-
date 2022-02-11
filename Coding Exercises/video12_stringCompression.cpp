//doubt
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr[100];
    cin.getline(arr, 100);

    int len = strlen(arr) - 1;

    for (int i = 0; i < len; i++)
    {
        int n = 0;
        if (arr[i] >= 'a' and arr[i] <= 'z')
        {
            for (int j = 0; j < len; j++)
            {
                if (arr[i] == arr[j])
                {
                    n++;
                }
            }
        }
        cout << arr[i] << "," << n << endl;
    }
}