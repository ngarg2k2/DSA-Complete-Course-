#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool rev(int a,int b){
    // cout<<"Comparing  a:"<<a<<" b: "<<b<<endl;
    return a>b;
}
int main(){
    int n;
    cin>>n;
    
    vector<int>arr(n);

    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }

    // sort(arr.begin(),arr.end(),rev);
    sort(arr.begin(),arr.end(),greater<int>());//in decending order

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // reverse(arr.begin(),arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        // cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}