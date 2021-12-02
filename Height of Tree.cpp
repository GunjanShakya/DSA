class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
       if(node==NULL)
        return 0;
    else
        return 1+max(height(node->left),height(node->right)); 
    }
    
};

//  https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1
