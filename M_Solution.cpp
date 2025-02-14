///Given a natural number n (1 <= n <= 500000), please output the summation of all its proper divisors.Definition: A proper divisor of a natural number is the divisor that is strictly less than the number.e.g. number 20 has 5 proper divisors: 1, 2, 4, 5, 10, and the divisor summation is: 1 + 2 + 4 + 5 + 10 = 22.

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n, i, sum=1;
        cin>>n;
        if(n<=1) // Check the special case 1
        {
            cout<<"0"<<"\n";
            continue;
        }


        for( i=2; i*i<=n; i++)
        {
            if(n%i==0) // check n is divisible or not
            {
                sum+=i; // Add all divisible number
                if(i!=n/i) // Reduce some test case
                    sum+= n/i; // Add the number
            }
        }
        cout<<sum<<"\n";
    }

    return 0;
}
