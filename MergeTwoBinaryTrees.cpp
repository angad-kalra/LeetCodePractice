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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        TreeNode* t_res = new TreeNode(0);
        if(t1!=nullptr && t2!=nullptr)    {
            t_res->val = t1->val + t2->val;
            t_res->left = mergeTrees(t1->left,t2->left);
            t_res->right = mergeTrees(t1->right,t2->right);
            return t_res;
        }else if(t1!=nullptr)  {
            return t1;
        }else if(t2!=nullptr)  {
            return t2;
        }else
            return nullptr;
    }
};
