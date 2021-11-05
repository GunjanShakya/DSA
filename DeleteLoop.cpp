class Solution
{
    public:
    //Function to remove a loop in the linked list.
     bool hasCycle(Node *head) {
        if(head==NULL || head->next==NULL)
            return false;
        Node * f=head,*s=head;
        while(f!=NULL && f->next!= NULL )
        {
            f=f->next->next;
            s=s->next;
            if(s==f)
                return true;
        }
        return false;
    }
    void removeLoop(Node* head)
    { if(hasCycle(head)==false)
    return;
    Node *f=head,*s=head;
   // f=f->next->next; s=s->next;
    while(f->next && f->next->next)
    {  f=f->next->next;
        s=s->next;
        if(f==s)
        break;        
    }    
    if(f==head)
    {
        while(s->next!=head)
        s=s->next;
        s->next=NULL;
        return;
          } 
     
        f=head;
        while(f->next!=s->next)
        {
            f=f->next; s=s->next;
        } s->next=NULL;
         }
};

// https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1

