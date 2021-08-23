#include <iostream>
using namespace std;
int main()
{
    bool b;
    int n,m;
    cin>>n>>m;
    int key;
    cin>>key;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==key)
            {
                b=true;
                cout<<i<<" "<<j<<endl;
            }
        }
    }
    if(b==0)
    {
        cout<<"element not found";
    }
    
    return 0;
}

