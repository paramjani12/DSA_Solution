#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int hexadecimalToDecimal(string n)
{
    int ans=0;
    int c=0;
    for(int i=n.length()-1;i>=0;i--)
    {
        if(n[i]>='A'&&n[i]<='F')
        {
            int m=n[i]-'A'+10;
            ans+=m*pow(16,c);
        }
        else 
        {
            int m=n[i]-'0';
            ans+=m*pow(16,c);
        }
        c++;
    }
    return ans;
}
int main()
{
    string n;
    cin>>n;
    cout<<hexadecimalToDecimal(n);
    return 0;
}


