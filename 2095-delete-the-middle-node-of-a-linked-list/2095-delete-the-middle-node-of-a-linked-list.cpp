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
    ListNode* deleteMiddle(ListNode* head) {
      ListNode* temp=new ListNode();
        temp->next=head;
        ListNode* s,*f,*tmp;
        s=head,f=head; tmp=temp;
        while(f and f->next)
        {
            f=f->next->next;
            s=s->next;
            tmp=tmp->next;
        }
        tmp->next=s->next;
        return temp->next;
    }
};