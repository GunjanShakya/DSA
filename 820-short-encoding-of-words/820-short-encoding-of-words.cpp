struct TrieNode{
    vector<TrieNode*> edges = vector<TrieNode*> (26, nullptr);
    bool isEnd;
    TrieNode() {
        isEnd = 0;
    }
};
class Solution {
public:
    TrieNode* root = new TrieNode(); 
    int res = 0;
    void insert(string s) {
        TrieNode* currnode = root;
        for(auto itr = s.rbegin();itr!=s.rend();itr++) {
            if(!currnode->edges[*itr - 'a']) currnode->edges[*itr - 'a'] = new TrieNode();
            currnode = currnode->edges[*itr - 'a'];
        }
        currnode->isEnd = 1;
    }
    void find(int currlen, TrieNode* currnode) {
        bool fl = 1;
        for(int i=0;i<26;i++) {
            if(currnode->edges[i]) {
                fl = 0;
                find(currlen+1, currnode->edges[i]);
            }
        }
        if(fl) res += currlen+1;
    }
    int minimumLengthEncoding(vector<string>& words) {
        for(string word: words) {
            insert(word);
        }
        find(0, root);
        return res;
    }
};