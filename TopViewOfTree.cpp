class Solution
{
    public:
    vector<int> topView(Node *root)
    { map<int,int> m;
    queue<pair<Node *,int>> q;
    q.push({root,0}); vector<int> ans;
    if(!root) return ans;
    while(!q.empty())
    {
        Node *t=q.front().first;
        int h=q.front().second;
        q.pop();
        if(t->left) q.push({t->left,h-1});
        if(t->right) q.push({t->right,h+1});
        if(m[h]==0) m[h]=t->data;
    } for(auto x:m) ans.push_back(x.second);
    return ans;
    }

};
