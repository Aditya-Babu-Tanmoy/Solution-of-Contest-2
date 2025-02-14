/// Write a program which computes the digit number of sum of two integers a and b.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b;
    while(cin>>a>>b)
    {
        int sum=a+b; // Add the number
        string s=to_string(sum); // Push the sum into string
        cout<<s.length()<<"\n";
    }
    return 0;
}
