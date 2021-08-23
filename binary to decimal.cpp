#include <iostream>
#include <cmath>
using namespace std;
int binaryToDecimal(int n)
{
    int ans=0;
    int i=0;
    while(n!=0)
    {
        int m=n%10;
        ans+=m*pow(2,i);
        i++;
        n/=10;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<binaryToDecimal(n);
    return 0;
}

