#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    string s;
    // getline(cin,s,'#');//3rd argument is the stopping criteria
    // cout<<s;

    vector<string>arr;
    string temp;
    int n;
    cin>>n;
    getchar();
    while(n--){
        getline(cin,temp);
        arr.push_back(temp);
    }

    for(string x:arr){
        cout<<x<<endl;
    }
    
}