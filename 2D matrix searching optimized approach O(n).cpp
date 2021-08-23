#include <iostream>

using namespace std;

int main()
{
    bool found=false;
    int m,n;
    cin>>m>>n;
    int key;
    cin>>key;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int a=0;
    int b=n-1;
    while(a<m&&b>=0)
    {
        if(arr[a][b]==key)
        {
            found=true;
        }
        if(arr[a][b]<key)
        {
            a++;
        }
        else
        {
            b--;
        }
    }
    /*or
    while(a<m&&b>=0)
    {
        if(arr[a][b]==key)
        {
            found=true;
            break;
        }
        else if(arr[a][b]<key)
        {
            a++;
        }
        else
        {
            b--;
        }
    }*/
    if(found==true)
    {
        cout<<"element found";
    }
    else
    {
        cout<<"element not found";
    }
    return 0;
}

