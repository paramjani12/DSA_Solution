#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s="sssddfgsssh";
    string answer;
    answer=s[0];
    for(int i=1;i<s.length();i++)
    {
        if(s[i]!=s[i-1])
        {
            answer+=s[i];
        }
    }
    cout<<answer;
    return 0;
}

