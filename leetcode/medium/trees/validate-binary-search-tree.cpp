/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool helper(TreeNode *root,long ma,long mi){
        if (not root) return true;
      

        if (root->val < ma and root->val > mi)
            return helper(root->left,root->val,mi) and helper(root->right,ma,root->val);
        return false;
    }
    bool isValidBST(TreeNode* root) {
        long ma = LONG_MAX,mi = LONG_MIN;
        return helper(root,ma,mi);
    }
};