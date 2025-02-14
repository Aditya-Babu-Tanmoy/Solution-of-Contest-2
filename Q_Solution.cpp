/// A number is called almost prime if it has exactly two distinct prime divisors. For example, numbers 6, 18, 24 are almost prime, while 4, 8, 9, 42 are not. Find the amount of almost prime numbers which are between 1 and n, inclusive.


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=0;

    for(int num=1; num<=n; num++) // for finding distinct prime number
    {
        int p=0; // count the distinct prime numbers
        for(int i=2; i<=num; i++)
        {
            if(num%i==0) // point number 1
            {
                bool prime=true; // Prime checker
                for(int j=2; j*j<=i; j++) // point number 2 to check
                {
                    if(i%j==0) // Check both number is divisible by both or not
                    {
                        prime=false;
                        break;
                    }
                }
                if(prime)
                    p++;
            }
        }

        if(p==2) // Check it has 2 distinct or not
            c++;
    }
    cout<<c<<endl;
    return 0;
}
