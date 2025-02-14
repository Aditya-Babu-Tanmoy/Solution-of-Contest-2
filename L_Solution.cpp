///Given n integers, your task is to report for each integer the number of its divisors.For example, if x=18, the correct answer is 6 because its divisors are 1,2,3,6,9,18.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, c=0;
        cin>>a;
        for(int i=1; i*i<=a; i++)
        {
            if(a%i == 0)// Check Divisible or not
            {
                c++;
                if(i!= a/i) // Use this to reduce time limit
                    c++;
            }
        }
        cout<<c<<"\n";
    }

    return 0;
}
