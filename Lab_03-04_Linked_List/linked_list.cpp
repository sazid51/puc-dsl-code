#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

//List Construction
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

        if(head==nullptr){ // Checking empty list
            head=cur_node;
        }

        else{
            prev_node -> next = cur_node;
        }

        prev_node = cur_node;
    }
    return head;
}

// Printing the List (List Traversing)
void Traverse(Node* cur_node)
{
    cout<<"List Traversing: ";
    while(cur_node != nullptr)
    {
        cout<<cur_node->data<<" ";
        cur_node=cur_node->next;
    }

    cout<<endl;
}

// Traversing Recursion Approach
void RecTraverse(Node* cur_node)
{
    if(cur_node==nullptr)
        return;

    cout<<cur_node->data<<" ";
    RecTraverse(cur_node->next);
}

// Insert at the beginning
void InsertBeginning(Node*& head, int data)
{
    Node* new_node=new Node;
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

// Insert at last of the list
void InsertEnd(Node* head, int data)
{
    Node* new_node = new Node;
    new_node->data = data;
    new_node->next=nullptr;
    if(head==nullptr)
    {
        head=new_node;
        return;
    }

    Node* cur_node=head;
    while(cur_node->next != nullptr)
        cur_node = cur_node->next;

    cur_node->next=new_node;
}


// Insert into the linked list after a given position
void InsertAfter(Node* cur_node, int p, int new_data)
{
    int cur_p=1;
    while(cur_p<p)
    {
        cur_node=cur_node->next;
        cur_p++;
    }
    Node* new_node = new Node;
    new_node->data=new_data;
    new_node->next=cur_node->next;
    cur_node->next=new_node;
}

// Delete from first
void DeleteBeginning(Node*& head)
{
    if(head==nullptr)
    {
        cout<<"List is empty. Nothing to delete.";
        return;
    }
    Node* deletedNode=head;
    head = head->next;
    delete deletedNode;
}

// Delete from end
void DeleteEnd(Node* head)
{
    if(head==nullptr)
    {
        cout<<"List is empty. Nothing to delete.";
        return;
    }

    Node* cur_node=head;
    while(cur_node->next->next != nullptr)
        cur_node = cur_node->next;

    Node* deletedNode=cur_node->next;
    cur_node->next=nullptr;
    delete deletedNode;
}

// Delete after a given node
void DeleteAfter(Node* cur_node, int p)
{
    int cur_p=1;
    while(cur_p<p)
    {
        cur_node=cur_node->next;
        cur_p++;
    }
    Node* deleted_node = cur_node->next;
    cur_node->next = deleted_node->next;
    delete deleted_node;
}


int main()
{
    Node* head=nullptr;
    head = Construct();
    Traverse(head);
    InsertBeginning(head, 10);
    Traverse(head);
    InsertEnd(head, 50);
    Traverse(head);
    DeleteBeginning(head);
    Traverse(head);
    DeleteEnd(head);
    Traverse(head);
    InsertAfter(head, 2, 7);
    Traverse(head);
    DeleteAfter(head, 2);
    Traverse(head);
}
