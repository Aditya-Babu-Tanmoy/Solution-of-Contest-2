///There is a data which provides heights (in meter) of mountains. The data is only for ten mountains.Write a program which prints heights of the top three mountains in descending order.

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[10];
    for(int i=0; i<10; i++)
        cin>>arr[i];

    sort(arr, arr+10); // Sort the array
    cout<<arr[9]<<"\n"<<arr[8]<<"\n"<<arr[7]<<"\n"; // Print the last 3 number
    return 0;
}
