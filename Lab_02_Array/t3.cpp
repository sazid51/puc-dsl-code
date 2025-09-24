#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={5,7,12,15,13};
    int key;
    cout<<"Value to search: ";
    cin>>key;
    int s=sizeof(a)/sizeof(a[0]);
    int isFound=0;
    for(int i=0;i<;i++)
    {
        if(arr[i]==key)
        {
            cout<<"Element found at position: "<<i<<endl;
            isFound=1;
            break;
        }
    }
    if(isFound==0)
        cout<<"Not Found"<<endl;
}


