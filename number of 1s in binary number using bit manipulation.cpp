#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=0;
    while(n)
    {
        n=n&(n-1);
        c++;
    }
    cout<<c;

    return 0;
}

