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
    bool same(TreeNode* l, TreeNode* r)
    {
	    //1. 두 노드가 모두 null일때
        if(!l && !r) return true;
    
        //3번 종료조건과 바꾼...
       //2. 두 노드 중 하나라도 null일때
        if(!l || !r) return false;
    
        //2번 종료조건과 바꾼...
        //3. 두 노드 모두 존재하고, 값이 다른경우
        if(l->val != r->val) return false;
    
	    return same(l->left, r->right) &&
    	       same(l->right, r->left);
    }

    bool isSymmetric(TreeNode* root) 
    {
        if(!root) return true;

        return same(root->left, root->right);
    }
};