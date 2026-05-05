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
    const int FAKE = -1000000;
    int height(TreeNode* node) {

        if (node == nullptr) {
            return 0;
        }

        int left = height(node->left);

        if (left == FAKE) {
            return FAKE;
        }

        int right = height(node->right);

        if (right == FAKE) {
            return FAKE;
        }

        if (abs(left - right) > 1) {
            return FAKE;
        }

        return max(left, right) + 1;
    }

    bool isBalanced(TreeNode* root) {
        return height(root) != FAKE;
    }
};