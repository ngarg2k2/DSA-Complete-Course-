#include<iostream>
using namespace std;
int linerSearch(int arr[],int n,int key){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==key)
                return i;       
    }
    return -1;
}
int main(){
    int arr[]={1,5,9,41,55,63,45,87};
    int n=sizeof(arr)/sizeof(int);

    int key;
    cin>>key;

    int index=linerSearch(arr,n,key);
    if(index!=-1)
        cout<<key<<" found at index "<<index<<endl;
    else    
        cout<<key<<" not found"<<endl;
    
    return 0;
}