#include<iostream>
using namespace std;
int getBit(int n,int pos)
{
    return((n & (1<<pos))!=0);
}

int setBit(int n,int pos)
{
    return(n|(1<<pos));
}

int clearBit(int n,int pos)
{
    int mask=~(1<<pos);
    return(n & mask);
}

int updateBit(int n,int pos,int value)
{
     int mask=~(1<<pos);
    n=n & mask;
    return(n|(value<<pos));

}
int main(){
cout<<getBit(6,2)<<endl;
cout<<setBit(7,3)<<endl;
cout<<clearBit(6,2)<<endl;
cout<<updateBit(6,3,1)<<endl;
return 0;
}