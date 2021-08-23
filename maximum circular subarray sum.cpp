#include<iostream>
#include<climits>
using namespace std;
int kadane(int arr[],int n)
{
    int mx=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum<0)
        {
            sum=0;
        }
        mx=max(mx,sum);
    }
    return mx;
}
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int mn;
    int ans1,ans2;
    int result;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ans1=kadane(arr,n);
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        arr[i]=-arr[i];
    }
    mn=kadane(arr,n);
    ans2=sum+mn;
    result=max(ans1,ans2);
    cout<<result<<endl;
    return 0;
}
