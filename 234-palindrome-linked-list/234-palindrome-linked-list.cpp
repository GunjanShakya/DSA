/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
     ListNode* rev(ListNode* head) {
       ListNode* prev=NULL;
        ListNode* curr = head;
       ListNode *next;
        while(curr!=NULL)
        {
            
             next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        } 
        return prev;
    }
     bool isPalindrome(ListNode* head) {
     if(!head or !head->next) return  true;
         ListNode* s=head,*f=head;
         while(f->next and f->next->next)
         {
             s=s->next;
             f=f->next->next;
         } f=head;
         s->next=rev(s->next);
         s=s->next;
         while(s)
         {
           if(f->val!=s->val) return false;
             f=f->next; s=s->next;
         } return true;
    }
/***********************************************************************************************
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode* ptr=head;
        while(ptr)
        {
            v.push_back(ptr->val);
            ptr=ptr->next;
        } 
        vector<int> v1;
        v1=v;
        reverse(v.begin(),v.end());
        if(v==v1)
            return true;
        return false;
    }
    ***************************************************************************************/
};