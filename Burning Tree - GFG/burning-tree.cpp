//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

class Solution {
private:
Node* tar=NULL;
void solve(Node* root, int t, unordered_map<Node*,Node*> &par)
{
    if(root==NULL) return;
    if(root->data==t) tar=root;
    if(root->left) par[root->left]=root;
    if(root->right) par[root->right]=root;
    solve(root->left,t,par);
    solve(root->right,t,par);
}
  public:
    int minTime(Node* root, int target) 
    {
        // Your code goes here
      unordered_map<Node*,Node*> par;
      unordered_map<Node*,bool> vis;
      solve(root,target,par);
      queue<Node*> q;
      q.push(tar);
      vis[tar]=true;
      int k=0;
      while(!q.empty())
      {
          int sz=q.size();
          k++;
          while(sz--)
          {
              Node *n=q.front();
              q.pop();
              if(n->left and !vis[n->left])
              {
                  q.push(n->left);
                  vis[n->left]= true;
              }
               if(n->right and !vis[n->right])
              {
                  q.push(n->right);
                  vis[n->right]= true;
              }
               if(par[n] and !vis[par[n]])
              {
                  q.push(par[n]);
                  vis[par[n]]= true;
              }
          }
      } return k-1;
    }
};

//{ Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}

// } Driver Code Ends