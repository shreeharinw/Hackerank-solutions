int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method. 
    Node* h1=headA->next;
    Node* h2;
    int flag=0;
    while(h1->next!=NULL)
    {
        h2=headB->next;
        flag=0;
        while(h2!=NULL && flag==0)
        {
            if(h2!=h1)
                h2=h2->next;
            else
               flag=1;
        }
        if(flag==1)
            break;
        h1=h1->next;
    }
    return h1->data;
}
