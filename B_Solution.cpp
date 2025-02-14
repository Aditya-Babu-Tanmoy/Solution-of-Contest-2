///Write a program which reads a two-digit number and prints every digit, separated by a space.
///Input
///One integer from 10 to 99 inclusively.

#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    cout<<a/10<<" "<<a%10<<"\n";
    return 0;
}

