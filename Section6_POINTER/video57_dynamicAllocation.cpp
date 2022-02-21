#include<bits/stdc++.h>
using namespace std;
int main(){
    //Static Allocation
    int n[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>n[i];
    }
    
    //Dynamic Allocation
    int n1;
    cin>>n1;
    int *n2=new int[n1];
    
    return 0;
} 