class Solution{
  public:
  Node *reverse(Node *head)
  {
       Node* prev=NULL;
        Node* curr = head;
       Node *next;
        while(curr!=NULL)
        {
            
             next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        } 
        return prev;
    }
  
  Node *middle(Node *head)
  {
      Node *s=head,*f=head;
      while(f && f->next)
      {
          f=f->next->next;
          s=s->next;
          
      } 
      return s;
  }
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    { Node *curr=head;
        Node *mid= middle(head);
        Node *revhead= reverse(mid);
        
        while(curr)
        {
        if(curr->data != revhead->data)
        return false;
            curr=curr->next; revhead=revhead->next;
        }
        return true;
        
    }
};
