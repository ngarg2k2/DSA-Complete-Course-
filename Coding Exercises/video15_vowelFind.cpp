#include<bits/stdc++.h>
using namespace std;
string vowelFind(string str){
    string output("");
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]=='a' or str[i]=='e' or str[i]=='i' or str[i]=='o' or str[i]=='u'){
            output=output+str[i];
        }
    }

    return output;
}
int main(){
    string s("aeoibsddaeioudb");
    cout<<vowelFind(s)<<endl;
    return 0;
}