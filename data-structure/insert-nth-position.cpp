Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
    Node*nn=new Node;
    nn->data=data;int count=0;Node*temp=head;
    if(position==0)
    {
        nn->next=head;
        head=nn;
        return head;
    }
    while(count!=position-1)
    {
        temp=temp->next;
        count++;
    }
    nn->next=temp->next;
    temp->next=nn;
    return head;
}
