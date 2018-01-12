 /* 
    
    class Node 
       int data;
       Node left;
       Node right;
   */
   /*void levelOrder(Node root) {
      Queue<Integer> myNumbers = new LinkedList<Integer>();
      Node temp=root;
      while(temp!=NULL)
      {
          myNumbers.add(temp->data)
          temp=temp->left;
          temp1=temp1->right;
      }*/
    void levelOrder(Node root) {
    Queue<Node> queue=new LinkedList<>();
    queue.add(root);

    while(!queue.isEmpty()) {
        Node tempNode=queue.poll();
        System.out.print(tempNode.data+" ");
        if(tempNode.left!=null)
            queue.add(tempNode.left);
        if(tempNode.right!=null)
            queue.add(tempNode.right);
    } 
}
