#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if((n&1)!=0)
    {
        cout<<"odd";
    }
    else
    {
        cout<<"even";
    }

    return 0;
}

