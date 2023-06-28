class Solution{
  public:
    int getMaxDepth(Node* node){
        if(node == nullptr){
            return 0;
        }
        return (1+max(getMaxDepth(node->left), getMaxDepth(node->right)));
    }
    int maxDepth(Node *root) {
        // Your code here
        return getMaxDepth(root);
    }
};