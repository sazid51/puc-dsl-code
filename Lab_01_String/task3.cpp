#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="madam";
    bool isPalindorm=true;
    int i=0; int j=str.size()-1;
    while(i<j)
    {
        if(str[i] != str[j])
            isPalindorm = false;
        i++; j--;
    }
    if(isPalindorm)
        cout<<"Palindrome\n";
    else cout<<"Not Palindrome\n";
}
