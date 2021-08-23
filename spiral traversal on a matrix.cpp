#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int rowStart=0;
    int rowEnd=n-1;
    int colStart=0;
    int colEnd=m-1;
    while(rowStart<=rowEnd&&colStart<=colEnd)
    {
        //first row
        for(int i=colStart;i<=colEnd;i++)
        {
            cout<<arr[rowStart][i]<<" ";
        }
        rowStart++;
        //last column
        for(int i=rowStart;i<=rowEnd;i++)
        {
            cout<<arr[i][colEnd]<<" ";
        }
        colEnd--;
        //last row
        for(int i=colEnd;i>=colStart;i--)
        {
            cout<<arr[rowEnd][i]<<" ";
        }
        rowEnd--;
        //first column
        for(int i=rowEnd;i>=rowStart;i--)
        {
            cout<<arr[i][colStart]<<" ";
        }
        colStart++;
        
    }
    return 0;
}

