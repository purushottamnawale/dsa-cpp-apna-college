#include "bits/stdc++.h"
using namespace std;

/*

Binary Tree Traversals
1. Preorder
    Root
    Left Subtree
    Right Subtree
    1 2 4 5 3 6 7

2. Inorder
    Left Subtree
    Root
    Right Subtree
    4 2 5 1 6 3 7

3. Postorder
    Left Subtree
    Right Subtree
    Root
    4 5 2 6 7 3 1

     1
   /   \
  2     3
 / \   / \
4   5 6   7

*/

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder(struct Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder (struct Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{

    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // preorder(root);
    // inorder(root);
    postorder(root);
    return 0;
}