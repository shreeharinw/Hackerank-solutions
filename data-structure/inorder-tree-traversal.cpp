void inOrder(node *root) {
    if(root==NULL)
        return;
    else
    {        
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}
