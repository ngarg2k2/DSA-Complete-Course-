// 1 2 3 4   start row-> (srt col to end col)
// 5 6 7 8   end col->(srt row+1 end row)
// 9 10 11 12 end row->(end col-1 to srt col )
// 13 14 15 16 srt col->(end row-1 to srt row+1)
// srtrow++ endcol-- endrow-- srtcol++
#include <bits/stdc++.h>
using namespace std;
void printSpiral(int a[100][100], int n, int m)
{
    int srtrow = 0;
    int endrow = n - 1;
    int srtcol = 0;
    int endcol = m - 1;

    while (srtcol <= endcol and srtrow <= endrow)
    {
        // start row
        for (int col = srtcol; col <= endcol; col++)
        {
            cout << a[srtrow][col]<<" ";
        }
        // end col
        for (int row = srtrow + 1; row <= endrow; row++)
        {
            cout << a[row][endcol]<<" ";
        }
        // end row
        for (int col = endcol - 1; col >= srtcol; col--)
        {
            if(srtrow==endrow){
                break;
            }
            cout << a[endrow][col]<<" ";
        }
        // srt col
        for (int row = endrow - 1; row >= srtrow + 1; row--)
        {
            // aviod duplicate printing of elements
            if (srtcol == endcol)
            {
                break;
            }
            cout << a[row][srtcol]<<" ";
        }
        srtrow++;
        endrow--;
        srtcol++;
        endcol--;
    }
}

int main()
{
    int a[100][100];
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    printSpiral(a,n,m);

    return 0;
}