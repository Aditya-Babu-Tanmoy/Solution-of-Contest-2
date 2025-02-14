/// We have N cream puffs.Find all possible number of people to which we can evenly distribute the cream puffs without cutting them.


#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, i;
    cin>>n;
    vector<long long int> a;// use vector to store divisible number
    a.push_back(1);
    for(i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            a.push_back(i);
            if(i!=(n/i))
                a.push_back(n/i); // Push the divisible number
        }
    }
    if(n!=1) //Check special case
        a.push_back(n);
    sort(a.begin(), a.end()); //sort the array to print perfectly
    for(long long int c: a)
        cout<<c<<"\n";

}
