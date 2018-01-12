
    int height(Node* root) {
        // Write your code here.
        //Node* temp=root;
        //while()
        if(root==NULL)
            return -1;
        else
            return max(height(root->left),height(root->right))+1;
    }
  