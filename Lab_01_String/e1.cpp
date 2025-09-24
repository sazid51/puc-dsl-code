#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2, str3;
    cin>>str1>>str2;
    str3=str1;
    cout<<"Copied: Str3 = "<<str3<<endl;
    string concat=str1+str2;
    string sub=str1.substr(0,4);
    string repl = str2.replace(1,1,"x");
    swap(str1,str2);
    cout<<"Concatenated: "<<concat<<endl;
    cout<<"Substring: "<<sub<<endl;
    cout<<"Replaced: "<<repl<<endl;
    cout<<"Swapped: str1 = "<<str1<<", str2 = "<<str2<<endl;

}
