class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head ->next == NULL)
            return head;
        ListNode *x = NULL;
        ListNode *turtle = head;
        ListNode *rabbit = head;
        while(rabbit !=  NULL && rabbit -> next != NULL)
        {
            x = turtle;
            turtle = turtle->next;         
            rabbit = rabbit ->next ->next;  
        }   
        x -> next = NULL;
        
        ListNode* p = sortList(head);   
        ListNode* q = sortList(turtle);    
        return mergelist(p, q);                 
    }
   
    ListNode* mergelist(ListNode *p, ListNode *q)
    {
        ListNode *temp = new ListNode(0);
        ListNode *current = temp;
        
            while(p != NULL && q != NULL)
            {
                if(p->val <= q->val)
                {
                    current -> next = p;
                    p = p -> next;
                }
                else
                {
                    current-> next = q;
                    q=q->next;
                }
            current = current ->next;    
            }
        if(p != NULL)
        {
            current -> next = p;
            p= p->next;
        }
        
        if(q != NULL)
        {
           current -> next = q;
            q = q ->next;
        }
        return temp->next;
    }
};
