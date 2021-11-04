
#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data; 
    Node * next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
}; Node *head=NULL;
void removeDuplicate()
{
  map<int,int> m;
  Node* prev,* curr=head;
  m[curr->data]=1;
  prev=curr;
  curr=curr->next;
  while(curr!=NULL)
  {
      if( m[curr->data])
      { Node* temp=curr;
          prev->next=curr->next;
          delete temp;
      }
      else { 
           m[curr->data]=1;
           prev=curr;
          
      }
      curr=prev->next;
  }
}
void insert(int x)
{
    Node *ptr= new Node(x);
    ptr->next = head;
    head=ptr;
} 
void end(int x)
{   Node* temp=new Node(x);
    Node* ptr=head;
    if(ptr==NULL)
    ptr=temp;
    else
    {while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next = temp;
} }

void display()
{ 
    Node* ptr=head;
    
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }  cout<<endl;
}

int main()
{
    
    insert(10);
    insert(20);
   insert(30);
    insert(100);
    insert(20);
    insert(10);
   insert(30);
    insert(100);
    end(50);
    end(60);
    end(70);
    display();
    removeDuplicate();
    display();
}
