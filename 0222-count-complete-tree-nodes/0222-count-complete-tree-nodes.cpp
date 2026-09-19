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
    int countNodes(TreeNode* root) {
        if(root==NULL)
        return 0;
 int lh = 0, rh = 0;

        TreeNode* left = root;
        TreeNode* right = root;

        while (left != NULL) {
            lh++;
            left = left->left;
        }

        while (right != NULL) {
            rh++;
            right = right->right;
        }

        if (lh == rh)
            return (1 << lh) - 1;
        return 1+countNodes(root->right)+countNodes(root->left);
        
    }
};