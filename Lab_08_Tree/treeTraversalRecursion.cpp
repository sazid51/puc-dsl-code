#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int val) // Constructor
    {
        data = val;
        left=right=nullptr;
    }
};

void recursive_preorder(Node *root)
{
    if(root==nullptr)
        return;

    cout<<root->data<<" ";
    recursive_preorder(root->left);
    recursive_preorder(root->right);
}

void recursive_inorder(Node* root)
{
    if(root==nullptr)
        return;

    recursive_inorder(root->left);
    cout<<root->data<<" ";
    recursive_inorder(root->right);
}

void recursive_postorder(Node* root)
{
    if(root==nullptr)
        return;

    recursive_postorder(root->left);
    recursive_postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    cout<<"Preorder Traversal: ";
    recursive_preorder(root);
    cout<<"\n\nInorder Traversal: ";
    recursive_inorder(root);
    cout<<"\n\nPostorder Traversal: ";
    recursive_postorder(root);

    cout<<endl<<endl;
}






