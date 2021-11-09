class Solution
{
    public:
     Node* reverseList(Node* head) {
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
    Node* addOne(Node *head) 
    {  head=reverseList(head);
    Node *curr=head;
    while(curr!=NULL)
    {
        if(curr->next==NULL && curr->data==9)
        {
            Node *temp=new Node(0);
            curr->data=1;
            temp->next=head;
            head=temp;
            curr=curr->next;
        }
        else if(curr->data==9)
        {
            curr->data=0;
            curr=curr->next;
        }
        else{
            curr->data=curr->data+1;
            curr=curr->next;
            break;
        }
    } 
    head=reverseList(head);
    return head;
        // Your Code here
        // return head of list after adding one
    }
};
