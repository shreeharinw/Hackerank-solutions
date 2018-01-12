Node* Insert(Node *head,int data)
{
  // Complete this method
    Node*nn=new Node;
    nn->data=data;
    if(head==NULL)
    {
        nn->next=NULL;
    }
    else
    {
        nn->next=head;
    }
    head=nn;
    return head;
}
