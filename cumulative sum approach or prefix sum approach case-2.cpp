#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int mx=INT_MIN;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int currsum[n];
    currsum[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        currsum[i]=currsum[i-1]+arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int sum=0;
        mx=max(currsum[i],mx);
        for(int j=0;j<i;j++)
        {
            sum=currsum[i]-currsum[j];
            mx=max(mx,sum);
        }
    }
    cout<<mx<<endl;
    return 0;
}
