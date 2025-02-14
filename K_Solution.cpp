/// Write a program which reads an integer n and prints the factorial of n. You can assume that n ≤ 20.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int  n, c=1, i;
    cin>>n;
    for(i=1; i<=n; i++)
        c=c*i; // Counting Factorial
    cout<<c<<"\n";
    return 0;
}
