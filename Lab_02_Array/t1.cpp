#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100], s, val, pos, i;
    cout<<"Length of array: ";
    cin>>s;
    for(i=0;i<s;i++)
        cin>>arr[i];

    cout<<"Insert Value: ";
    cin>>val;
    cout<<"Insert Position: ";
    cin>>pos;

    for(i=s-1;i>=pos;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = val;
    s++;
    cout<<"Array: ";
    for(i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nNew Size of the Array: "<<s<<endl;
}
