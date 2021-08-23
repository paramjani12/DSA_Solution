#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=0;
    while(n)
    {
        if((n&1)!=0)
        {
            c++;
        }
        n=n>>1;
    }
    cout<<c;

    return 0;
}

