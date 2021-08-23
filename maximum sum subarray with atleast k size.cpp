#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int mx=INT_MIN;
    int n;
    cin>>n;
    int k;
    cin>>k;
    if(k>n)
    {
        cout<<"invalid";
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxSum[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum>=0)
        {
            sum+=arr[i];
        }
        else
        {
            sum=arr[i];
        }
        maxSum[i]=sum;
    }
    int exactK=0;
    int atleastK=0;
    for(int i=0;i<k;i++)
    {
        exactK+=arr[i];
    }
    mx=max(mx,exactK);
    for(int i=k;i<n;i++)
    {
        exactK=exactK+arr[i]-arr[i-k];
        mx=max(mx,exactK);
        atleastK=exactK+maxSum[i-k];
        mx=max(mx,atleastK);
    }
    cout<<mx<<endl;
    return 0;
}
