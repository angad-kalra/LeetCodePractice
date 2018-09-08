/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        stack<TreeNode*> s1, s2;
        s1.push(root1);
        s2.push(root2);
        
        while(!s1.empty() && !s2.empty())   {
            if(dfs(s1) != dfs(s2))  {
                return false;
            }
        }
        return s1.empty() && s2.empty();
    }
    
    int dfs(stack<TreeNode*>& s)  {
        while(true) {
            TreeNode* n = s.top();
            s.pop();
            if(n->right!=nullptr)
                s.push(n->right);
            if(n->left!=nullptr)
                s.push(n->left);
            if(n->left==nullptr && n->right==nullptr)
                return n->val;
        }
    }
};
