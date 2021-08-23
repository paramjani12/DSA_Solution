#include <iostream>

using namespace std;
bool isPowerOf4(int n)
{
    int count=0;
    if((n&&(!(n&(n-1))))==1)
    {
        while(n>1)
        {
            n=n>>1;
            count++;
        }
        if(count%2==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
    cout<<isPowerOf4(32);

    return 0;
}

