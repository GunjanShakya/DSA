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
     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
         if(!headA or !headB) return NULL;
        ListNode* h1=headA,*h2=headB;
         while(h1!=h2)
         {
             if(!h1) h1=headB;
             else  h1=h1->next;
             if(!h2) h2=headA;
             else h2=h2->next;
            //  or
            //  h1=h1==NULL?headB:h1->next;
            //  h2=h2==NULL?headA:h2->next;
             
         } return h1;
    }
  /**************************************************************************************
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
         ListNode *a=headA, *b=headB;
        int count1=0, count2=0;
        for(ListNode *curr=headA;curr!=NULL; curr=curr->next) count1++;
        for(ListNode *curr=headB;curr!=NULL; curr=curr->next) count2++;
        
        while(count1>count2) {
            count1--;
            a=a->next;
        }
        
		 while(count2>count1) {
            count2--;
            b=b->next;
        }
        
        while(a!=b) {
            a=a->next;
            b=b->next;
        }
        
        return a;
    } 
    **************************************************************************************/
    
};