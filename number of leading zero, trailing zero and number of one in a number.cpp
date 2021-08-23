#include <iostream>
using namespace std;

int main()
{
    int n=6;
    cout<<__builtin_popcount(n)<<endl;
    cout<<__builtin_clz(n)<<endl;
    cout<<__builtin_ctz(n)<<endl;

    return 0;
}

