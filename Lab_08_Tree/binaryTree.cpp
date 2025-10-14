#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;

    Node(int val)
    {
        data = val;
        left=right=nullptr;
    }

};

void preorder(Node *root)
{
    cout<<"Pre-order Traversal: ";
    if(root==nullptr)
        return;

    stack<Node*>st;
    st.push(root);

    while(!st.empty())
    {
        Node *cur = st.top();
        cout<< cur->data <<" ";
        st.pop();
        if(cur->right != nullptr)
            st.push(cur->right);
        if(cur->left != nullptr)
            st.push(cur->left);
    }

    cout<<endl<<endl;


}

void inorder(Node* root)
{
    cout<<"In-order Traversal: ";
    if(root==nullptr)
        return;

    stack<Node*>st;
    Node* cur=root;
    while(cur!=nullptr || !st.empty())
    {
        while(cur!=nullptr)
        {
            st.push(cur);
            cur=cur->left;
        }
        cur = st.top();
        cout<<cur->data<<" ";
        st.pop();
        cur=cur->right;
    }
    cout<<endl<<endl;
}



int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    preorder(root);
    inorder(root);
}








