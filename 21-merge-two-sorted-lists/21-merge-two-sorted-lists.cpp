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
public: // IN-PLACE
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
   if(!l1) return l2;
        if(!l2) return l1;
        if(!l2) return l1;
        if(l1->val>l2->val) swap(l1,l2);
        ListNode* res=l1;
        while(l1 and l2)
        {
            ListNode* temp=NULL;
            while(l1 and l1->val<=l2->val)
            {
                temp=l1;
                l1=l1->next;
                
            } temp->next=l2;
            swap(l1,l2);
        } return res;
    }
    /*
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *res;
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
         if(list1->val > list2->val)
         {res=list2; list2=list2->next;} 
        else { res=list1;
            list1=list1->next;
        } ListNode* ptr=res;
        while(list1 && list2)
        {
            if(list1->val > list2->val)
            {
                res->next=list2;
                list2=list2->next;
            }
            else {
                res->next=list1;
                list1=list1->next;
            } res=res->next;
        }
        if(list1)
        {
          res->next=list1;
           // list1=list1->next;
        }
        if(list2)
        {
          res->next=list2;
           // list2=list2->next;
        } 
        return ptr;
    }*/ 
};