#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[30];
    int i=0;
    while(n>0)
    {
        arr[i++]=n%2;
        n/=2;
    }
    for(int c=i-1;c>=0;c--)
    {
        cout<<arr[c];
    }
    return 0;
}

