void postOrder(node *root) {
    if(root==NULL)
        return;
    else
    {       
        postOrder(root->left);        
        postOrder(root->right);
        cout<<root->data<<" ";
    }
}

