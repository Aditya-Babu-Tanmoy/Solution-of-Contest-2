///Chef is looking to buy a TV and has shortlisted two models. The first one costs A rupees, while the second one costs B rupees. Since there is a huge sale coming up on Chefzon, Chef can get a flat discount of C rupees on the first TV, and a flat discount of D rupees on the second one. Help Chef determine which of the two TVs would be cheaper to buy during the sale.

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        if(a-c > b-d)// Check The Discount
            cout<<"Second"<<"\n";
        else if(a-c < b-d)
            cout<<"First"<<"\n";
        else
            cout<<"Any"<<"\n";
    }
    return 0;
}
