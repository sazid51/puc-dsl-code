//Stack Implementation using Linked List

#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top=nullptr;

void push(int value)
{
    Node* new_node = new Node;
    new_node->data=value;
    new_node->next=nullptr;
    if(top==nullptr)
    {
        top=new_node;
    }
    else{
        new_node->next = top;
        top = new_node;
    }
}

void pop()
{
    if(top==nullptr)
    {
        cout<<"Stack Underflow\n";
        return;
    }
    Node* deleted_node = top;
    top = deleted_node->next;
    delete deleted_node;
}

void printStack()
{
    Node* cur_node=top;
    while(cur_node!=nullptr)
    {
        cout<<cur_node->data<<" ";
        cur_node = cur_node->next;
    }
    cout<<endl;
}

void getTop()
{
    if(top==nullptr)
    {
        cout<<"Stack is empty\n";
        return;
    }
    cout<<"Top is: "<<top->data<<endl;
}

int main()
{
    push(5);
    push(7);
    push(3);
    push(14);
    push(20);
    getTop();
    printStack();
    pop();
    getTop();
    printStack();
    pop();
    getTop();
    printStack();
}
