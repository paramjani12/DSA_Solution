#include <iostream>

using namespace std;
int getBit(int n,int position)
{
    return ((n&(1<<position))!=0);
}
int setBit(int n,int position)
{
    return (n|(1<<position));
}
int clearBit(int n,int position)
{
    return (n&(~(1<<position)));
}
int updateBit(int n,int position,int value)
{
    int ans=(n&(~(1<<position)));
    ans=(ans|(value<<position));
    return ans;
}
int toggleBit(int n,int position)
{
    return (n^(1<<position));
}
int main()
{
    //cout<<getBit(n,position);
    //cout<<setBit(n,position);
    //cout<<clearBit(11,1);
    //cout<<updateBit(9,2,1);
    cout<<toggleBit(5,2);
    return 0;
}
