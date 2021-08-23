#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0;
    int arr[30];
    while(n>0)
    {
        arr[i++]=n%8;
        n/=8;
    }
    for(int c=i-1;c>=0;c--)
    {
        cout<<arr[c];
    }

    return 0;
}

