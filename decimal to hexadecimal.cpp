#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0;
    string str[30];
    while(n>0)
    {
        int m=n%16;
        if(m>=10&&m<=15)
        {
            str[i++]=m-10+'A';
        }
        else
        {
            str[i++]=m+'0';
        }
        n/=16;
    }
    for(int c=i-1;c>=0;c--)
    {
        cout<<str[c];
    }

    return 0;
}

