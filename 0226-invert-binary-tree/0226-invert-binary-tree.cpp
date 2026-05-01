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
        if(!root) return nullptr;

        auto l = root -> left ? root -> left : nullptr;
        auto r = root -> right ? root -> right : nullptr;

        root -> left = r;
        root -> right = l;

        invertTree(l);
        invertTree(r);

        return root;
    }
};