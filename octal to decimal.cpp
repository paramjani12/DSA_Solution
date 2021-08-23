#include <iostream>
#include <cmath>
using namespace std;
int octalToDecimal(int n)
{
    int ans=0;
    int i=0;
    while(n!=0)
    {
        int m=n%10;
        ans+=m*pow(8,i);
        i++;
        n/=10;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<octalToDecimal(n);
    return 0;
}

