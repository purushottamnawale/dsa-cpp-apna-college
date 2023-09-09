#include "bits/stdc++.h"
using namespace std;

/*
Build Tree From Preorder & Inorder

Algorithm:
1. Pick element from preorder & create a node
2. Increment preorder idx
3. Search for picked element's pos in inorder
4. Call to build left subtree from inorder's 0 to pos-1
5. Call to build right subtree from inorder's pos+1 to n
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

int search(int inorder[], int start, int end, int curr)
{
   for (int i = start; i <= end; i++)
   {
      if (inorder[i] == curr)
      {
         return i;
      }
   }
   return -1;
}

Node *buildTree(int preorder[], int inorder[], int start, int end)
{
   static int idx = 0;
   if (start > end)
   {
      return NULL;
   }
   int curr = preorder[idx];
   idx++;
   Node *node = new Node(curr);
   if (start == end)
   {
      return node;
   }
   int pos = search(inorder, start, end, curr);
   node->left = buildTree(preorder, inorder, start, pos - 1);
   node->right = buildTree(preorder, inorder, pos + 1, end);

   return node;
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
   // int preorder[] = {1, 2, 4, 3, 5};
   // int inorder[] = {4, 2, 1, 5, 3};

   // build tree
   // Node *root = buildTree(preorder, inorder, 0, 4);
   /*
         1
       /   \
      2     3
     / \   / \
    4     5

   */

   int preorder[] = {1, 2, 4, 5, 3, 6, 7};
   int inorder[] = {4, 2, 5, 1, 6, 3, 7};
   Node *root = buildTree(preorder, inorder, 0, 6);
   inorderPrint(root);

   return 0;
}

/*
Explanation:
preorder = {1, 2, 4, 5, 3, 6, 7};
inorder  = {4, 2, 5, 1, 6, 3, 7};


buildTree(0,6)
   idx = 0 static integer
   curr = 1
   idx = 1
   node = 1
   pos = 3 in the inorder array

   node->left = buildTree(0,2)
      idx = 1
      curr = 2
      idx = 2
      node = 2
      pos = 1

      node->left = buildTree(0,0)
         idx = 2
         curr = 4
         idx = 3
         node = 4

         return 4
               / \

      node->right = buildTree(2,2)
         idx = 3
         curr = 5
         idx = 4
         node = 5

         return 5
               / \

      return 2
            / \
           4   5
   node->right = buildTree(4,6)
      idx = 4
      curr = 3
      idx = 5
      node = 3
      pos = 5

      node->left = buildTree(4,4)
         idx = 5
         curr = 6
         idx = 6
         node = 6

         return 6
               / \

      node->right = buildTree(6,6)
         idx = 6
         curr = 7
         idx = 7
         node = 7

         return 7
               / \

      return 3
            / \
           6   7

   return    1
           /   \
          2     3
         / \   / \
        4   5 6   7

*/
