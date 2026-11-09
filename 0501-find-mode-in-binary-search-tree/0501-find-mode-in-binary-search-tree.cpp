class Solution {
public:
    int prev = 0;
    int count = 0;
    int maxi = 0;
    vector<int> ans;
    bool first = true;

    void inorder(TreeNode* root) {
        if (root == NULL)
            return;

        inorder(root->left);

        if (first || root->val != prev) {
            count = 1;
            prev = root->val;
            first = false;
        }
        else {
            count++;
        }

        if (count > maxi) {
            maxi = count;
            ans.clear();
            ans.push_back(root->val);
        }
        else if (count == maxi) {
            ans.push_back(root->val);
        }

        inorder(root->right);
    }

    vector<int> findMode(TreeNode* root) {
        inorder(root);
        return ans;
    }
};