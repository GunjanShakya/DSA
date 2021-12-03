vector<int> reverseLevelOrder(Node *root)
{ vector<int> ans;
  if(root==NULL) return ans;
  queue<Node *> q;
  q.push(root);
  while(!q.empty())
  {
      Node *t= q.front();
      ans.push_back(t->data);
      if(t->right) q.push(t->right);
      if(t->left) q.push(t->left);
      q.pop();
      
  } 
  reverse(ans.begin(),ans.end());
  return ans;
    // code here
}
