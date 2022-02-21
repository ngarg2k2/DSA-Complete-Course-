#include<bits/stdc++.h>
using namespace std;
int ** create2dArray(int n,int m){
    int **arr=new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i]=new int[m];
    }
    int value=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j]=value;
            value++;
        }
        
    }
    return arr;
}
int main(){
    int rows,cols;
    cin>>rows>>cols;
    
    int** arr=create2dArray(rows,cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}