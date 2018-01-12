Node* Reverse(Node *head)
{
  // Complete this method
    Node *prev = NULL;  
   Node *cur = head;  
   Node *next ;  
   while(cur!=NULL){  
     next = cur->next;  
     cur->next = prev;  
     prev = cur;  
     cur = next;  
   }  
   head = prev;  
   return head;
}
