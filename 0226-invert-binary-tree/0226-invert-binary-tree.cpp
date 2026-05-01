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
    TreeNode* invertTree(TreeNode* root) 
    {
        conq(root);

        return root;
    }

    void conq(TreeNode* root)
    {
        if(!root) return;

        auto l = root -> left ? root -> left : nullptr;
        auto r = root -> right ? root -> right : nullptr;

        root -> left = r;
        root -> right = l;

        conq(l);
        conq(r);
    }
};