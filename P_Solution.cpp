/// Print all prime numbers in the range from m to n, inclusive.

// Using basic trial division method
#include <iostream>
using namespace std;

int main()
{
    long long int m, n;
    cin>>m>>n;
    bool p=false;

    for(long long int i=m; i<=n; i++)
    {
        if(i<=3)
        {
            cout<<i<<"\n";
            p=true;
            continue;
        }
        if(i%2==0 || i%3==0)
            continue;

        bool prime=true;
        for(long long int j=5; j*j<=i; j+=6)
        {
            if(i%j==0 || i%(j+2)==0)
            {
                prime=false;
                break;
            }
        }
        if(prime)
        {
            cout<<i<<"\n";
            p=true;
        }
    }
    if(!p)
        cout<<"Absent"<<"\n";

    return 0;
}





