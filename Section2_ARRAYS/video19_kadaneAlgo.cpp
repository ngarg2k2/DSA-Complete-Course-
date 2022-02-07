#include<iostream>
using namespace std;
int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);

    int curSum=0;
    int maxSum=0;

    for (int i = 0; i < n; i++)
    {
        curSum=curSum+arr[i];
        if(curSum<0){
            curSum=0;
        }
        cout<<curSum<<endl;
        maxSum=max(maxSum,curSum);
    }
    cout<<"Max Sum: "<<maxSum<<endl;
}