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
        TreeNode* head = root;
        TreeNode* last = head;

        conq(root, last);

        return head;
    }

    void conq(TreeNode* root, TreeNode* last)
    {
        if(!root) return;

        auto l = root -> left ? root -> left : nullptr;
        auto r = root -> right ? root -> right : nullptr;

        last -> left = r;
        last -> right = l;
        last = l;
        conq(l, last);
        last = r;
        conq(r, last);
    }
};