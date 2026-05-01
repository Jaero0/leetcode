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
        std::queue<TreeNode*> q;
        q.push(root);

        while(q.size() > 0)
        {
            TreeNode* root = q.front();
            q.pop();

            if(!root) continue;

            auto l = root -> left ? root -> left : nullptr;
            auto r = root -> right ? root -> right : nullptr;

            root -> left = r;
            root -> right = l;

            q.push(l);
            q.push(r);
        }

        return root;
    }
};