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
int main()
{
    Node *root=new Node(20);
    root->left=new Node(10);
    root->right=new Node(30);
    root->left->left=new Node(5);
    return 0;
}
