#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int ans[30];
    int i=0;
    int remd=0;
    while(a>0||b>0)
    {
        ans[i++]=(a%10+b%10+remd)%2;
        remd=(a%10+b%10+remd)/2;
        a/=10;
        b/=10;
    }
    if(remd==1)
    {
        ans[i++]=1;
    }
    for(int c=i-1;c>=0;c--)
    {
        cout<<ans[c];
    }
    return 0;
}
