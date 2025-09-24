#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        st.push(a);
    }

    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }

    cout<<st.empty()<<endl;
}

