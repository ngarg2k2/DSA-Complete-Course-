#include<iostream>
#include<cstring>
using namespace std;
int main(){
    // char a[]={'a','b','c','d','e','f','\0'};
    // cout<<a<<endl;
    // cout<<strlen(a)<<endl; //no of visible char
    // cout<<sizeof(a)<<endl; //no of visible char + \0 NULL char

    char b[100];
    
    char temp=cin.get();
    int len=0;
    int i=0;
    while(temp!='#'){
        len++;
        b[i]=temp;
        temp=cin.get();
        i++;
    }
    // b[len-1]='\0';
    for (int i = 0; i < len-1; i++)
    {
        cout<<b;
    }

    cout<<endl;
    cout<<"Length: "<<len<<endl;
}