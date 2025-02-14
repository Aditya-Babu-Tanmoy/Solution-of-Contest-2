///Salah will give you an easy task.He will give you a number and wants you to tell him if that number is prime or not.Prime number: is a number that is not divisible by any number except 1 and its self.Prime numbers is {2, 3, 5, 7, 11, ....}.
///HINT: straight forward solution can fit time limit.


#include<iostream>
using namespace std;
// Using basic trial division method
int main()
{
    long long int n;
    cin>>n;
    if(n==1)
        cout<<"Not Prime"<<"\n";
    else if(n<=3)
        cout<<"Prime"<<"\n";
    else if(n%2==0 || n%3==0)
        cout<<"Not Prime"<<"\n";
    else
    {
        bool p=true;
        for(long long int i=5; i*i<=n; i+=6)
        {
            if(n%i==0 || n%(i+2)==0)
            {
                p=false;
                break;
            }
        }
        if(p)
            cout<<"Prime"<<"\n";
        else
            cout<<"Not Prime"<<"\n";

    }
return 0;
}

