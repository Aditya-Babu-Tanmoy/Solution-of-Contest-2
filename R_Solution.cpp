/// Print the n'th prime number.


#include<iostream>
#include<vector>
using namespace std;

bool fun(long long int n) // use this function to define all prime number
{
    if(n<=1)
        return false;
    if(n<=3)
        return true;
    if(n%2==0 || n%3==0)
        return false;
    else
        for(long long int j=5; j*j<=n; j+=6)
            if(n%j==0 || n%(j+2)==0)
                return false;
    return true;

}
int main()
{

        vector<long long int> v; // use vector to store all the prime number
        for(long long int i=2; i<=1000000; i++)
            if(fun(i))
                v.push_back(i);
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        if(m>0 && m<=v.size())// check nth prime number is exist or not
            cout<<v.at(m-1)<<"\n";
        else
            cout<<"ERROR"<<"\n";
    }
    return 0;
}
