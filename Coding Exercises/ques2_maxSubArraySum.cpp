#include <bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A)
{
    vector<int> preArr(A.size());
    preArr[0] = A[0];
    for (int i = 1; i < A.size(); i++)
    {
        preArr[i] = preArr[i - 1] + A[i];
    }
    int maxSum = 0;
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < A.size(); j++)
        {
            int sum = 0;
            sum = i > 0 ? preArr[j] - preArr[i - 1] : preArr[j];
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}
int main()
{
    vector<int> arr(6);

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    cout << maxSumSubarray(arr) << endl;
}