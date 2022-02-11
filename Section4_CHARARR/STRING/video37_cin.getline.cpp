#include<iostream>
using namespace std;
int main(){
    char para[1000];
    cin.getline(para,1000);
    cout<<para<<endl;
    cin.getline(para,1000,'#');//3rd argu is optional stopping criteria
    cout<<para<<endl;
}