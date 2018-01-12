Node* MergeLists(Node *headA, Node* headB)
{
    if(headA == NULL) return headB;
    if(headB == NULL) return headA;
    struct Node *tempA = headA,*tempB = headB,*headC,*prev;
    bool flag = true;
    while(tempA != NULL && tempB != NULL){
        if(flag){
            if(tempA->data < tempB->data) headC = tempA;
            else headC = tempB;
            flag = false;
            continue;
        }  
        if(tempA->data > tempB->data ) swap(tempA,tempB);
        while(tempA->next != NULL && tempA->next->data < tempB->data) tempA = tempA->next;
        if(tempA->next==NULL){
                tempA->next=tempB;
                break;
        }
        prev = tempA->next;
        headB = tempB->next;
        tempA->next = tempB;
        tempB->next = prev;
        tempB = headB;
        tempA = prev;  
    }
    return headC;
}