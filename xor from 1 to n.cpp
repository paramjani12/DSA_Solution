#include <iostream>

using namespace std;

/*int main()
{
    cout<<(1^2^3^4^5^6);
    return 0;
}*/

//OR 
int xorTillN(int n)
{
    if(n%4==0)
        return n;
    else if(n%4==1)
        return 1;
    else if(n%4==2)
        return (n+1);
    else
        return 0;
}
int main()
{
    int n;
    cin>>n;
    cout<<xorTillN(n);
}
