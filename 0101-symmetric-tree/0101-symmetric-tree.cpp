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
    bool isSame(TreeNode* l, TreeNode* r)
    {
        //로직 종료 조건
        if(!l && !r) return true;
        if(!l || !r) return false;
        if(l->val != r->val) return false;

        //핵심 아이디어
        return isSame(l->left, r->right) && isSame(l->right, r->left);
    }

    bool isSymmetric(TreeNode* root) 
    {
        if(!root) return true;

        return isSame(root->left, root->right);
    }
};