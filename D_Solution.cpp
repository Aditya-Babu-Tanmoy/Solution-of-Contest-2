///Chef’s phone shows a Battery Low notification if the battery level is 15% or less.Given that the battery level of Chef’s phone is X%, determine whether it would show a Battery low notification.

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
       (a<=15) ? cout<<"YES"<<"\n" : cout<<"NO"<<"\n"; // Check Less than 15% or not
    }
    return 0;
}
