#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={1,2,3,5};
    vector<int> arr1(10,0);

    //size of vector
    cout<<"Size of vector: "<<arr.size()<<endl;

    //capacity of vector
    cout<<"Capacity of vector: "<<arr.capacity()<<endl;

    //Push_back
    arr.push_back(25);

    //Now the size will inc by 1 and capacity by twice
    cout<<"Size of vector: "<<arr.size()<<endl;
    cout<<"Capacity of vector: "<<arr.capacity()<<endl;

    //display
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<", ";
    } 
    cout<<endl;

    //pop_back
    arr.pop_back();

    //display
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<", ";
    } 
    cout<<endl;

    //display vector 2
    for (int i = 0; i < arr1.size(); i++)
    {
        cout<<arr1[i]<<", ";
    }
    cout<<endl;

    return 0;
}