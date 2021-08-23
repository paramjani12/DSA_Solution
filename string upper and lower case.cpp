#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s="Param Jani";
    //to upper
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]-=32;
        }
    }
    cout<<s<<endl;
    //to lower
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]+=32;
        }
    }
    cout<<s<<endl;
    //to upper using transform
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    //to lower using transform
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
    return 0;
}
