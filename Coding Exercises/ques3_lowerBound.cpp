#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> A, int Val) {
    for (int i = 0; i < A.size(); i++)
    {
        if(Val<A[0]){
            return -1;
        }else if(Val<A[i]){
            return A[i-1];
        }else if(Val==A[i]){
            return A[i];
        }
    }
    return -1;
}
int main(){
    vector<int>A(5);

    for (int i = 0; i < A.size(); i++)
    {
        cin>>A[i];
    }
    
    int val;
    cin>>val;

    cout<<lowerBound(A,val)<<endl;
    return 0;
}