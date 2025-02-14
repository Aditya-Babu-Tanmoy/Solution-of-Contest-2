/// Write a program which reverses a given string str.


#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin>>str;
	reverse(str.begin(), str.end());// Reverse the string
    cout<<str<<"\n";
    return 0;
}
