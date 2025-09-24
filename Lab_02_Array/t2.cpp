#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100], s, pos, i;
    cout<<"Length of array: ";
    cin>>s;
    for(i=0;i<s;i++)
        cin>>arr[i];

    cout<<"Delete Position: ";
    cin>>pos;

    for(i=pos;i<s-1;i++)
    {
        arr[i] = arr[i+1];
    }

    s--;
    cout<<"Array: ";
    for(i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nNew Size of the Array: "<<s<<endl;
}

