Node* Insert(Node *head,int data)
{
  // Complete this method
    Node*nn=new Node;
    nn->data=data;
    nn->next=NULL;
    if(head==NULL)
    {
        head=nn;return head;
    }    
    else
    {
        Node*temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=nn;
        return head;
    }
    
}
