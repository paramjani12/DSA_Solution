#include<iostream>
using namespace std;
int main()
{
    bool b;
    int n;
    cin>>n;
    int sum;
    cin>>sum;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int s=0;
    int e=s+1;
    while(s<e&&e<=n)
    {
        if((arr[s]+arr[e])==sum)
        {
            b=true;
            cout<<s<<" "<<e<<endl;
        }
        e++;
        if(e==n)
        {
            s++;
            e=s+1;
        }
        if(s==n-1)
        {
            break;
        }
    }
    if(b==0)
    {
        cout<<"No pair found";
    }
    return 0;
}
