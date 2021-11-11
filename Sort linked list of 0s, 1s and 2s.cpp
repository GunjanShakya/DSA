class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        int count[]={0,0,0};
        Node *curr=head;
        while(curr!=NULL)
        {
            count[curr->data]++;
            curr=curr->next;
        }
        int i=0; curr=head;
        while(curr!=NULL)
        {
            if(count[i]==0)
            i++;
            else
            {
                curr->data=i;
                count[i]--;
                curr=curr->next;
            }
        }
        return head;
        // Add code here
        
    }
};
