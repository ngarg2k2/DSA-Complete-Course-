#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    int maxSum = 0;

    // Calculating prefix sum
    int preArr[n] = {0};
    preArr[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        preArr[i] = preArr[i- 1] + arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;

            // In this soln the order is O(N^3)

            /*for (int k = i; k <= j; k++)
            {
                sum=sum+arr[k];
                cout<<sum<<" ,";
            }*/

            // In this soln the order is O(N^2)

            sum = i > 0 ? preArr[j] - preArr[i - 1] : preArr[j];

            cout <<sum<<", ";
            maxSum = max(maxSum, sum);
        }
        cout<<endl;
    }
    cout << "Max Sum: " << maxSum << endl;
}