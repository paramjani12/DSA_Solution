#include<iostream>
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
    int mx=INT_MIN;
    int mn=0;
    int sum[n];
    sum[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        sum[i]=sum[i-1]+arr[i];
    }
    for(int i=0;i<n;i++)
    {
        mx=max(mx,sum[i]-mn);
        mn=min(mn,sum[i]);
    }
    cout<<mx<<endl;
    return 0;
}
