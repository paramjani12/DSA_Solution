#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int freq[26];
    int mx=0;
    char c;
    string s="fsjgngjndcmsafken";
    for(int i=0;i<26;i++)
    {
        freq[i]=0;
    }
    for(int i=0;i<s.length();i++)
    {
        freq[s[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(freq[i]>mx)
        {
            mx=freq[i];
            c='a'+i;
        }
    }
    
    cout<<mx<<" "<<c;
    return 0;
}

