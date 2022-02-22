#include <iostream>
using namespace std;
class vector
{
    int *arr;
    int curSize;
    int maxSize;

public:
    vector(int max_size = 1)
    {
        curSize = 0;
        maxSize = max_size;
        arr = new int[maxSize];
    }
    void push_back(int n)
    {
        if (curSize == maxSize)
        {
            int *oldArr = arr;
            maxSize = maxSize * 2;
            arr = new int[maxSize];

            for (int i = 0; i < curSize; i++)
            {
                arr[i] = oldArr[i];
            }

            delete[] oldArr;
        }
        arr[curSize++] = n;
    }

    void pop_back()
    {
        // int n=arr[curSize];
        if (curSize >= 0)
        {
            curSize--;
        }
    }

    bool isEmpty()
    {
        if (curSize == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int front()
    {
        return arr[0];
    }

    int back()
    {
        return arr[curSize - 1];
    }

    int at(int n)
    {
        return arr[n];
    }

    int size()
    {
        return curSize;
    }

    int capacity()
    {
        return maxSize;
    }

    int operator[](int i)
    {
        return arr[i];
    }
};

int main()
{
    vector v;

    cout << "Is the vector empty: " << v.isEmpty() << endl;

    cout << "Size of v: " << v.size() << endl;
    cout << "Capacity of v: " << v.capacity() << endl;

    v.push_back(10);
    cout << "Size of v: " << v.size() << endl;
    cout << "Capacity of v: " << v.capacity() << endl;

    v.push_back(20);
    cout << "Size of v: " << v.size() << endl;
    cout << "Capacity of v: " << v.capacity() << endl;

    v.push_back(30);
    cout << "Size of v: " << v.size() << endl;
    cout << "Capacity of v: " << v.capacity() << endl;

    cout << "Display all elements: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;

    v.pop_back();
    cout << "Size of v: " << v.size() << endl;
    cout << "Capacity of v: " << v.capacity() << endl;

    cout << "Front element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;

    cout << "Element at second position: " << v.at(2) << endl;

    cout << "Display all elements: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}