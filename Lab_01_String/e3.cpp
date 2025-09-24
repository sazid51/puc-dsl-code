#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main()
{
    string str;
    cin>>str;
    int j = str.size()-1;
    for(int i=0; i<=j/2;i++)
    {
        swap(str[i], str[j--]);
    }
    cout<<str<<endl;

}
