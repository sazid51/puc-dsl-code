#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* Construct()
{
    Node* head=nullptr;
    Node* prev_node;

    cout<<"List Construction: ";

    while(1)
    {
        int new_data;
        cin>>new_data;
        if(new_data==-1){
            break;
        }

        Node* cur_node= new Node;
        cur_node->data = new_data; /* (*cur_node).data = new_node */
        cur_node->next = nullptr;

        if(head==nullptr){
            head=cur_node;
        }

        else{
            prev_node -> next = cur_node;
        }

        prev_node = cur_node;
    }
    return head;
}

void PrintList(Node* cur_node)
{
    cout<<"List : ";
    while(cur_node != nullptr)
    {
        cout<<cur_node->data<<" ";
        cur_node=cur_node->next;
    }

    cout<<endl;
}

bool IsSorted(Node* cur_node)
{
    Node* next_node;
    while(cur_node->next != nullptr)
    {
        next_node = cur_node->next;
        if(cur_node->data > next_node->data)
            return false;
        cur_node = cur_node->next;
    }
    return true;
}


int main()
{
    Node* head=nullptr;

    PrintList(head);
    if(IsSorted(head))
        cout<<"List is sorted"<<endl;
    else cout<<"List is not sorted"<<endl;
}
