/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        int l=1 , r=1;
        if(root->left != NULL)
            l = maxDepth(root->left)+1;
        if(root->right != NULL)
            r = maxDepth(root->right)+1;
        return max(l,r);
    }
};
