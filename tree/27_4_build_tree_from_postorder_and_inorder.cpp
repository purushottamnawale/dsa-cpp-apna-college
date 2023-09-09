#include "bits/stdc++.h"
using namespace std;

/*
Build Tree From Postorder & Inorder

Algorithm:
1. Start from the end of postorder & pick an element to create a node
2. Decrement postoder idx
3. Search for picked element's pos in inorder
4. Call to build right subtree from inorder's pos+1 to n
5. Call to build left subtree from inorder 0 to pos-1
6. Return the node
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

int search(int inorder[], int start, int end, int val)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == val)
        {
            return i;
        }
    }
    return -1;
}
Node *buildTree(int postorder[], int inorder[], int start, int end)
{
    static int idx = end;
    if (start > end)
    {
        return NULL;
    }

    int val = postorder[idx];
    idx--;
    Node *curr = new Node(val);

    if (start == end)
    {
        return curr;
    }
    int pos = search(inorder, start, end, val);
    curr->right = buildTree(postorder, inorder, pos + 1, end);
    curr->left = buildTree(postorder, inorder, start, pos - 1);

    return curr;
}
void inorderPrint(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}
int main()
{
    // int postorder[] = {4, 2, 5, 3, 1};
    // int inorder[] = {4, 2, 1, 5, 3};

    // build tree
    // Node *root = buildTree(postorder, inorder, 0, 4);

    /*
          1
        /   \
       2     3
      / \   / \
     4     5

    */

    int postorder[] = {4, 5, 2, 6, 7, 3, 1};
    int inorder[] = {4, 2, 5, 1, 6, 3, 7};
    Node *root = buildTree(postorder, inorder, 0, 6);

    /*
          1
        /   \
       2     3
      / \   / \
     4   5 6   7

    */
    inorderPrint(root);
    cout << "\n";
    return 0;
}

/*
Explanation:
int postorder[] = {4, 5, 2, 6, 7, 3, 1};
int inorder[] = {4, 2, 5, 1, 6, 3, 7};


buildTree(0,6)
   idx = 6 static integer
   val = 1
   idx = 5
   curr = 1
   pos = 3 in the inorder array

   curr->right = buildTree(4,6)
      idx = 5
      val = 3
      idx = 4
      curr = 3
      pos = 5

      curr->right = buildTree(6,6)
         idx = 4
         val = 7
         idx = 3
         curr = 7

         return 7
               / \

      curr->left = buildTree(4,4)
         idx = 3
         val = 6
         idx = 2
         curr = 6

         return 6
               / \

      return 3
            / \
           6   7

   curr->left = buildTree(0,2)
      idx = 2
      val = 2
      idx = 1
      curr = 2
      pos = 1

      curr->right = buildTree(2,2)
         idx = 1
         val = 5
         idx = 0
         curr = 5

         return 5
               / \

      curr->left = buildTree(0,0)
         idx = 0
         val = 4
         idx = -1
         curr = 4

         return 4
               / \

      return 2
            / \
           4   5

   return    1
           /   \
          2     3
         / \   / \
        4   5 6   7

*/
