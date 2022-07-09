/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
      ListNode *s=head,*f=head;  
        if(head==NULL or head->next==NULL)
            return NULL;
        while(f and f->next)
        {
            s=s->next;
            f=f->next->next;
            if(s==f)
            {
                s=head;
                while(s!=f)
                {
                    s=s->next;
                    f=f->next;
                } return s;
            }
        }             return NULL;

    }
};