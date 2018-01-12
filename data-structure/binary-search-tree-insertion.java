 /* Node is defined as :
 class Node 
    int data;
    Node left;
    Node right;
    
    */

static Node Insert(Node root,int value) {
    Node temp=root;
    Node prev=temp;
    Node newnode=new Node();
    newnode.data=value;
    newnode.left=null;
    newnode.right=null;
    if(root==null)
    {
        
        root=newnode;
        return root;
    }
        
    while(temp!=null)
    {
        prev=temp;
        if(value<=temp.data)
        {
            temp=temp.left;
        }
        else
        {
            temp=temp.right;
        }
        /*if(value<=temp.data && temp.left!=NULL)
        {
            temp=temp.left;
        }
        else if (value>temp.data && temp.right!=NULL)
        {
            temp=temp.right;
        }*/
        
    }
    if(value<prev.data)
        prev.left=newnode;
    else
        prev.right=newnode;
    return root;
    
       
    }


