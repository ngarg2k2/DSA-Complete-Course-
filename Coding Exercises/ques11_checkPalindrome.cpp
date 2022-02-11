#include<iostream>
#include<cstring>
using namespace std;
int checkPalindrome(char arr[]){
    int i=0;
    int j=strlen(arr)-1;
    // cout<<i<<" "<<j<<endl;
    while (i<j)
    {
        if(arr[i]!=arr[j]){
            return 0;
        }
        // cout<<arr[i]<<endl;
        // cout<<arr[j]<<endl;
        i++;
        j--;
    }
    return 1;
}
int main(){
    char arr[1000];
    cin.getline(arr,1000);

    if(checkPalindrome(arr)!=1){
        cout<<"NOT palindrome"<<endl;
    }else{
        cout<<"Palindrome"<<endl;
    }

    return 0;   
}