#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[1000]="appple";
    char b[1000]={"banana"};

    //Cal length
    cout<<strlen(a)<<endl;
    cout<<strlen(b)<<endl;

    //String copy
    // strcpy(b,a);//copy content of a into b

    //String conncatenate
    strcat(a,b);//copy content of b into a
    cout<<a<<endl;
    cout<<b<<endl;

    //String compare
    cout<<strcmp(b,a)<<endl;//return 0 when same 1 when argu 1 > argu 2 and -1 if argu 1< argu 2
    return 0;
}