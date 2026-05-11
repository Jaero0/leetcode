class Solution {
public:

    int dfs(int &ans, TreeNode* root) {
        if (!root) return 0;

        int l = dfs(ans, root->left);
        int r = dfs(ans, root->right);

        ans = max(ans, l + r);

        return max(l, r) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0;
        dfs(ans, root);
        return ans;
    }
};