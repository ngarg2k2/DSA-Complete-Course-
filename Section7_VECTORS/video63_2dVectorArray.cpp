#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>array={{1,2,3},{4,5,6},{7,8,9}};
    array[0][0]+=10;
    for (int i = 0; i < array.size(); i++)
    {
        for (int num:array[i])
        {
            cout<<num<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}