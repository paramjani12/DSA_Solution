#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    int s=0;
    int e=n-1;
    bool b=false;
    while(s<=e)
    {
        if(arr[s]==arr[e])
        {
            b=true;
        }
        else
        {
            break;
        }
        s++;
        e--;
    }
    if(b==1)
    {
        cout<<"Yes it is a palindrome";
    }
    else
    {
        cout<<"No it is not a palindrome";
    }

    return 0;
}

