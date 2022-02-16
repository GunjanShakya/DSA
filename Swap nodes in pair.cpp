class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp=head;
        while(head!=NULL and head->next!=NULL)
        {
            int value=head->next->val;
            head->next->val=head->val;
            head->val=value;
            head=head->next->next;
          
        }
        return temp;
    }
};
