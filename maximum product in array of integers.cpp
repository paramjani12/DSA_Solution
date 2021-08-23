#include <iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int posMax1=INT_MIN;
    int posMax2=INT_MIN;
    int negMax1=INT_MIN;
    int negMax2=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>posMax1)
        {
            posMax2=posMax1;
            posMax1=arr[i];
        }
        else if(arr[i]>posMax2)
        {
            posMax2=arr[i];
        }
        if(arr[i]<0&&abs(arr[i])>abs(negMax1))
        {
            negMax2=negMax1;
            negMax1=arr[i];
        }
        else if(arr[i]<0&&abs(arr[i])>abs(negMax2))
        {
            negMax2=arr[i];
        }
    }
    if((posMax1*posMax2)>(negMax1*negMax2))
    {
        cout<<posMax1*posMax2;
    }
    else
    {
        cout<<negMax1*negMax2;
    }
    return 0;
}

