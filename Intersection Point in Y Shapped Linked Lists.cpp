int intersectPoint(Node* head1, Node* head2)
{ int c1=0,c2=0;
Node *cur1=head1,*cur2=head2;
while(cur1!=NULL)
{ cur1=cur1->next;
c1++; }
while(cur2!=NULL)
{c2++;cur2=cur2->next; }
cur1=head1;cur2=head2;
int diff=(abs(c1-c2));
if(c1>c2)
{
    while(diff--)
    cur1=cur1->next;
} else if(c2>c1)
{
   while(diff--) cur2=cur2->next;
}
while(cur1!=cur2)
{
    cur1=cur1->next;
    cur2=cur2->next;
}
if(cur1) return cur1->data;
return -1;
}
