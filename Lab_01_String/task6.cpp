#include<bits/stdc++.h>
using namespace std;

int main()
{
    string main_str,sub_str;
    cin>>main_str>>sub_str;
    int main_len=main_str.size();
    int sub_len=sub_str.size();
    int found=0;
    for(int i=0;i<=(main_len-sub_len);i++)
    {
        bool match=true;

        for(int j=0;j<sub_len;j++){
            if(main_str[i+j]!=sub_str[j])
            {
                match=false;
                break;
            }

        }

        if(match){
            found=1;
            cout<<"Substring Found\n";
            cout<<"Found at index: "<<i<<endl;
            break;
        }
    }
    if(!found)
        cout<<"Substring Not found"<<endl;

}







