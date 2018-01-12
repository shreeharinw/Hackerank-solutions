int GetNode(Node *head,int positionFromTail)
{
    int index = 0;
    Node* current = head;
    Node* result = head;
    while(current!=NULL)
    {
        current=current->next;
        if (index++>positionFromTail)
        {
            result=result->next;
        }
    }
    return result->data;
}