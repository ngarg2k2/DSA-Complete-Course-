#include<iostream>
using namespace std;
int binarySearch(int arr[],int l,int h,int key){
    int m=(l+h)/2;
    if(key==arr[m])
        return m;
    else if(key>arr[m])
        return binarySearch(arr,m+1,h,key);
    else if(key<arr[m])
        return binarySearch(arr,l,m-1,key);
    else
        return -1;
}
int binarySearchIter(int arr[],int l,int h,int key){
    while(l<=h){
        int m=(l+h)/2;
        if(arr[m]==key)
            return m;
        else if(arr[m]>key)
            h=m-1;
        else
            l=m+1;
    }
    return -1;
}
int main(){
    int arr[]={1,6,10,17,25,34,43,59,67,87,99};
    int n=sizeof(arr)/sizeof(int);

    int key;
    cin>>key;

    int index=binarySearchIter(arr,0,n-1,key);
    if(index!=-1)
        cout<<key<<" found at index "<<index<<endl;
    else
        cout<<key<<" not found"<<endl;

    return 0;
}   