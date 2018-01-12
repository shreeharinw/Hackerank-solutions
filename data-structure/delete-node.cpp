Node* Delete(Node *head, int position)
{
  // Complete this method
    int count=0;Node*k;Node*temp=head;
    if(position==0)
    {
        head=head->next;
        free(temp);return head;
    }
    while(count!=position-1)
    {
        temp=temp->next;
        count++;
    }
    k=temp->next;
    temp->next=temp->next->next;
    free(k);return head;
    
}
