// 1 2 3 4 
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
#include<bits/stdc++.h>
using namespace std;
void printWave(int a[100][100],int n,int m){
    int srtcol=0;
    // int srtrow=0;
    // int endrow=n-1;
    int endcol=m-1;
    while(srtcol!=a[0][0]){
        for (int row = srtcol; row <= endcol; row++)
        {
            cout<<a[row][endcol]<<" ";
        }
        for (int  row = endcol; row >= srtcol; row--)
        {
            cout<<a[row][endcol-1]<<" ";
        }
        for (int row = srtcol; row <= endcol; row++)
        {
            cout<<a[row][srtcol+1]<<" ";
        }
        for (int row = endcol; row >= srtcol; row--)
        {
            cout<<a[row][srtcol]<<" ";
        }
        srtcol++;
        endcol--;
    }
}
int main(){
    int a[100][100];
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
    printWave(a,n,m);
    return 0;
}