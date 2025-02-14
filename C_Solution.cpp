///Alice buys a toy with a selling price of 100 rupees. There is a discount of x percent on the toy. Find the amount Alice needs to pay for it.

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int a;
       cin>>a;
       cout<< (100-a) <<"\n\n"; // Used double new line to maintain the output Segment
    }
    return 0;
}
