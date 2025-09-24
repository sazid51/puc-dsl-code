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
    cout<<"List Construction:"<<endl;
    while(1)
    {
        int new_data;
        cin>>new_data;
        if(new_data==-1) break;

        Node* new_node = new Node;
        new_node->data = new_data;
        new_node->next=nullptr;
        if(head==nullptr)
        {
            head=new_node;
        }
        else{
            prev_node->next=new_node;
        }
        prev_node=new_node;
    }
    return head;
}

// Printing a List (Traversing)
void Traverse(Node* cur_node)
{
    cout<<"List Traversing: ";
    while(cur_node != nullptr)
    {
        cout<< cur_node->data <<" ";
        cur_node = cur_node->next;
    }
    cout<<endl;
}

int Length(Node* cur_node)
{
    int cnt=0;
    while(cur_node != nullptr)
    {
        cnt++;
        cur_node = cur_node->next;
    }
    return cnt;
}

void SimpleSearch(Node* cur_node, int key)
{
    while(cur_node != nullptr)
    {
        if(cur_node->data==key)
        {
            cout<<key<<" is found"<<endl;
            return;
        }
        cur_node = cur_node->next;
    }
    cout<<"Not found"<<endl;
}

int main()
{
    Node* head;
    head = Construct();
    Traverse(head);
    cout<<"\nLength= "<<Length(head)<<"\n\n";
    int key;
    cout<<"Key to search: ";
    cin>>key;
    SimpleSearch(head, key);
}
