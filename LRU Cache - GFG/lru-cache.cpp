//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// design the class in the most optimal way

class LRUCache {
public:
     class Node{
        public:
        Node *next;
        Node *prev;
        int key;
        int val;
        Node(int _key, int _value) 
        {
            key=_key;
            val=_value;
        }
    };
    Node* head=new Node(-1,-1);
    Node* tail=new Node(-1,-1);
    int cap; map<int,Node*> mp;
    LRUCache(int capacity) {
        cap=capacity;
        head->next=tail;
        tail->prev=head;
    }
    void addN(Node* newnode)
    {
        Node* temp=head->next;
        newnode->prev=head;
        newnode->next=temp;
        head->next=newnode;
        temp->prev=newnode;
    }
    void delN(Node* delnode)
    {
        Node* delnext=delnode->next;
        Node* delprev=delnode->prev;
        delprev->next=delnext;
        delnext->prev=delprev;
    }
    int get(int key) {
        if(mp.find(key)!=mp.end())
        {
            Node* resnode=mp[key];
            int ans=resnode->val;
            mp.erase(key);
            delN(resnode);
            addN(resnode);
            mp[key]=head->next;
            return ans;
        }
        return -1;
    }
    
    void set(int key, int value) {
     if(mp.find(key)!=mp.end())
     {
         Node* addr=mp[key];
         mp.erase(key);
         delN(addr);
     }
        else if(mp.size()==cap)
        {
            mp.erase(tail->prev->key);
            delN(tail->prev);
        }
        addN(new Node(key,value));
        mp[key]=head->next;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->set(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->get(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends