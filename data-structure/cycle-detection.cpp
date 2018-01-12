bool has_cycle(Node* head) {
   if (head == NULL){
        return 0;
    }
   //The old "tortoise and the hare" problem. Essentially, the "fast" pointer moves 2x the speed as the "slow" pointer. If there is a cycle, they will meet.
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast){
            return 1;
        }
    }
    return 0;
}
