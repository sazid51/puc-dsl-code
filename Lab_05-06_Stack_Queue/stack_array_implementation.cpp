//Stack using array

#include<bits/stdc++.h>
using namespace std;
#define MAX 100

int st[MAX];
int t=-1;

void push(int value)
{
    if(t==MAX-1)
    {
        cout<<"Stack Overflow"<<endl;
        return;
    }
    t++;
    st[t]=value;
}

void pop()
{
    if(t==-1)
    {
        cout<<"Stack Underflow"<<endl;
        return;
    }
    t--;
}


int top()
{
    return st[t];
}

bool isEmpty()
{
    if(t==-1)
        return true;
    return false;
}

void printStack()
{
    if(!isEmpty())
    {
        for(int i=0;i<=t;i++)
        {
            cout<<st[i]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    push(10);
    push(20);
    push(15);
    push(5);
    printStack();
    pop();
    printStack();
    cout<<"Top: "<<top()<<endl;
    if(isEmpty())
        cout<<"Stack is empty\n";
    else cout<<"Stack is not empty\n";
}
