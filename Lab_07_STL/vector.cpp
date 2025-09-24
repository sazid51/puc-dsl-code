#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>vec={2,7,1,15,4,20,13};

    sort(vec.begin(),vec.end(),greater<int>());

    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }

}
