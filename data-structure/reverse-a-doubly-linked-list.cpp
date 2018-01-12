Node Reverse(Node head) {
    Node t=head;
    Node p;
    Node n;
    Node temp=head;
    if(head==null || head.next==null)
        return head;
    while(temp!=null)
    {
        t=temp.prev;
        temp.prev=temp.next;
        temp.next=t;
        head=temp;
        temp=temp.prev;
    }
    /*t=temp.prev;
    temp.prev=temp.next;
    temp.next=t;*/
    
    return head;
}
