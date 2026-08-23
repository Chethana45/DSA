class Solution {
public:

    vector<TreeNode*> generate(int start, int end) {

        vector<TreeNode*> ans;

        // No nodes
        if(start > end) {
            ans.push_back(nullptr);
            return ans;
        }

        // Try every value as root
        for(int i = start; i <= end; i++) {

            // Generate all possible left subtrees
            vector<TreeNode*> leftTrees =
                generate(start, i - 1);

            // Generate all possible right subtrees
            vector<TreeNode*> rightTrees =
                generate(i + 1, end);

            // Combine every left with every right
            for(TreeNode* left : leftTrees) {

                for(TreeNode* right : rightTrees) {

                    TreeNode* root = new TreeNode(i);

                    root->left = left;
                    root->right = right;

                    ans.push_back(root);
                }
            }
        }

        return ans;
    }

    vector<TreeNode*> generateTrees(int n) {
        return generate(1, n);
    }
};