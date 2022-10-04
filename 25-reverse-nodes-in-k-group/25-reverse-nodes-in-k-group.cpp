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
    ListNode* reverseKGroup(ListNode* head, int k) {
      int ctr=0; ListNode *t=head;
        if(k==1 or !head) return head;
        while(t)
        {  t=t->next;
            ctr++;
        } ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* pre=dummy,*cur=dummy,*nex=dummy;
        while(k<=ctr)
        {
            cur=pre->next;
            nex=cur->next;
            for(int i=1;i<k;i++)
            {
                cur->next=nex->next;
                nex->next=pre->next;
                pre->next=nex;
                nex=cur->next;
            }
            ctr-=k;
            pre=cur;
        }
        return dummy->next;
    }
};