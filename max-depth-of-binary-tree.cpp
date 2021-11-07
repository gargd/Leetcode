class Solution {
public:
    int maxDepth(TreeNode* root) {
        
        if (root==NULL)return 0;
        
        int heightLeft = maxDepth(root->left);
        int heightRight = maxDepth(root->right);
        
        return max(heightLeft, heightRight) + 1;
        
    }
};
