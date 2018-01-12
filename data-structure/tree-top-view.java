void topView(Node root){ 
    Node curr = root; 
    Stack<Node> stack = new Stack<Node>();
    while(curr != null) { 
        stack.push(curr); 
        curr = curr.left; 
    } 
     
    while(!stack.isEmpty()){ 
        Node node = stack.pop(); 
        System.out.print(node.data + " ");
    } 
     
    curr = root.right; 
    while(curr != null){ 
        System.out.print(curr.data + " ");
        curr = curr.right; 
    } 
} 