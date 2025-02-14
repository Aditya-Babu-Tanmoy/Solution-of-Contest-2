///Chef has his lunch only between 1 pm and 4 pm (both inclusive).Given that the current time is X pm, find out whether it is lunchtime for Chef.

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
       (a <= 4 && a >= 1) ? cout<<"YES"<<"\n" : cout<<"NO"<<"\n"; // Check the time 1 to 4 or not
    }
    return 0;
}
