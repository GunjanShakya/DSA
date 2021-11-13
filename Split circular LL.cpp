void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    Node *slow,*fast;
    slow=head;
    fast=head->next;
    while(fast!=head&&fast->next!=head)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
   *head1_ref=head;
   *head2_ref=slow->next;
    slow->next=*head1_ref;
    Node *curr= *head2_ref;
    if(curr->next!=head)
    {
       curr=curr->next; 
    }
    curr->next=*head2_ref;
}
