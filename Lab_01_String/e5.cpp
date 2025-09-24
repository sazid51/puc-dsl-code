#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main()
{
    string str;
    cin>>str;
    int j = str.size()-1;
    bool flag = false;
    for(int i=0; i<=j/2;i++)
    {
        if(str[i] != str[j--])
            {
                flag=true;
                break;
            }
    }
    if(flag==true)
        cout<<"Not Palindrome"<<endl;
    else
        cout<<"Palindrome"<<endl;
}

