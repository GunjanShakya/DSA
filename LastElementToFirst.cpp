void func()
{
    Node *curr=head;
    while(curr->next->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next->next=head;
    head=curr->next;
    curr->next=NULL;
    
}
