Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    int k,j,flag;
    Node* temp = head;
    Node* m;
    Node* l;
    if(head==NULL)
        return head;    
    /*while(temp->next!=NULL)
    {
        flag=0;
        m=temp;
        k=temp->data;
        l=temp->next;
        j=l->data;
        while(k==j && l !=NULL)
        {            
            l=l->next;
            j=l->data;
            flag=1;
        }
        if(flag==1)
            temp->next=l;
        temp=temp->next;
    }*/
    while(temp->next!=NULL)
    {
        if(temp->data!=temp->next->data)
            temp=temp->next;
        else
            temp->next=temp->next->next;
    }
    return head;    
}
