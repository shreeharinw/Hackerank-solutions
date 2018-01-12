Node SortedInsert(Node head,int data) {
    Node new_node = new Node();
    new_node.data=data;
    if(head==null)
    {
        new_node.next=null;
        new_node.prev=null;
        head=new_node;
        return head;
    }
    Node temp=head;
    if(data<temp.data)
    {
        new_node.next=temp;
        new_node.prev=null;
        temp.prev=new_node;
        head=temp;
        return head;
    }
    while(temp.next!=null && temp.next.data<data)
    {
        temp=temp.next;
    }
    if(temp.next==null)
    { 
        new_node.next=null;
        new_node.prev=temp;
        temp.next=new_node;
        return head;
    }
    new_node.next=temp.next;
    new_node.prev=temp;
    temp.next.prev=new_node;
    temp.next=new_node;
    return head;
}
