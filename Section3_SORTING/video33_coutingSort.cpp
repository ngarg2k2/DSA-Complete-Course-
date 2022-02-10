#include <iostream>
#include <vector>

using namespace std;

vector<int> coutingSort(vector<int> arr)
{
    int max = arr[0];

    //finding largest numbers
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    //display max num
    cout << max << endl;

    //initial array of size max+1 with 0
    vector<int> cArr(max + 1, 0);


    for (int i = 0; i < arr.size(); i++)
    {
        cArr[arr[i]]++;
    }

    return cArr;
}

int main()
{
    int n;
    cin >> n;

    //Initialise array
    vector<int> arr(n);

    //taking input in array
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    //another array to store 0 1
    vector<int> cArr;
    
    //calling of function
    cArr = coutingSort(arr);

    //printing new array with values 0 and 1
    for (int i = 0; i < cArr.size(); i++)
    {
        cout << cArr[i] << " ";
    }
    cout << endl;

    int j = 0;
    for (int i = 0; i < cArr.size(); i++)
    {
        while (cArr[i]--)
        {
            arr[j] = i;
            j++;
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}