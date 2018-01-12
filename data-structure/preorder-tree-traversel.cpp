void preOrder(node *root) {
    if(root==NULL)
        return;
    else
    {
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}
