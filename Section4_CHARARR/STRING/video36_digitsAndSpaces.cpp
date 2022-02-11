#include<iostream>
using namespace std;
int main(){
    char a[100];
    char temp=cin.get();
    int alpha=0,num=0,space=0;

    while(temp!='\n'){
        if(temp>='0' and temp<='9'){num++;}
        else if((temp>='a' and temp<='z') ||(temp>='A' and temp<='Z')){alpha++;}
        else if(temp>=' ' or temp=='\t'){space++;}
        temp=cin.get();
    }
    cout<<"No of numbers: "<<num<<endl;
    cout<<"No of alphabets: "<<alpha<<endl;
    cout<<"No of spaces: "<<space<<endl;

    return 0;
}