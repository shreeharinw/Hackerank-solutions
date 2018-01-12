int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    if(headA==NULL && headB==NULL)
        return 1;
    while(headA!=NULL && headB!=NULL)
    {
        if(headA->data!=headB->data)
            return 0;
        headA=headA->next;
        headB=headB->next;
    }
    if(headA!=NULL && headB==NULL)
        return 0;
    if(headA==NULL && headB!=NULL)
        return 0;
    return 1;
}
