#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int ans[30];
    int prevCarry=0;
    int i=0;
    while(a>0&&b>0)
    {
        if(a%2==0&&b%2==0)
        {
            ans[i++]=prevCarry;
            prevCarry=0;
        }
        else if((a%2==0&&b%2==1)||(a%2==1&&b%2==0))
        {
            if(prevCarry==1)
            {
                ans[i++]=0;
                prevCarry=1;
            }
            else
            {
                ans[i++]=1;
                prevCarry=0;
            }
        }
        else
        {
            ans[i++]=prevCarry;
            prevCarry=1;
        }
        a/=10;
        b/=10;
    }
    while(a>0)
    {
        if(prevCarry==1)
        {
            if(a%2==0)
            {
                ans[i++]=1;
                prevCarry=0;
            }
            else
            {
                ans[i++]=0;
                prevCarry=1;
            }
        }
        else
        {
            ans[i++]=(a%2);
        }
        a/=10;
    }
    while(b>0)
    {
        if(prevCarry==1)
        {
            if(b%2==0)
            {
                ans[i++]=1;
                prevCarry=0;
            }
            else
            {
                ans[i++]=0;
                prevCarry=1;
            }
        }
        else
        {
            ans[i++]=(b%2);
        }
        b/=10;
    }
    if(prevCarry==1)
    {
        ans[i++]=1;
    }
    for(int c=i-1;c>=0;c--)
    {
        cout<<ans[c];
    }

    return 0;
}

