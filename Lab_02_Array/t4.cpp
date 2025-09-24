#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10]={5,7,12,13,15,17,23,25,30,32};
    int key, mid;
    cout<<"Value to search: ";
    cin>>key;
    int s=sizeof(arr)/sizeof(arr[0]);
    int left=0;
    int right=s-1;

    int isFound=0;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(arr[mid]==key)
        {
            cout<<"Element found at position: "<<mid<<endl;
            isFound=1;
            break;
        }

        else if(arr[mid]>key)
        {
            right=mid-1;
        }

        else if(arr[mid]<key)
        {
            left=mid+1;
        }
    }

    if(isFound==0)
        cout<<"Not found"<<endl;
}
