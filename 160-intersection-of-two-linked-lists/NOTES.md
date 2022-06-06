counting lengths of both the linked list
If linked list 1 is longer, we traverse it, till it becomes equal to length of second...If second one is longer, we traverse it, till it becomes equal to length of first
Since length of both is now equal, we traverse them together, and break if the nodes become equal
while(a!=b) {
a=a->next;
b=b->next;
}