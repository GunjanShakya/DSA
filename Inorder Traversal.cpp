#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left,*right;
    Node(int x)
    {
        data=x;
        left=right=NULL;
    }
};
void inorder(Node *root)
 {
     if(root!=NULL)
     {
         inorder(root->left);
         cout<<(root->data)<<" ";
         inorder(root->right);
     }
 }
int main()
{
    Node *root=new Node(20);
    root->left=new Node(10);
    root->right=new Node(30);
    root->left->left=new Node(5);
    root->right->left=new Node(25);
    root->right->right=new Node(34);
    inorder(root);
    return 0;
}
 
