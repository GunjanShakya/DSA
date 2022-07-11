/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
     vector<int> res;
    void getPreorder(Node *node) {
        if(!node) return;
        res.push_back(node -> val);
        for(int i = 0; i < node->children.size(); i++) getPreorder(node -> children[i]);
    }
    vector<int> preorder(Node* root) {
        getPreorder(root);
        return res;
    }
};