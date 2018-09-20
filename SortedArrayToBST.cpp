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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int nums_size = nums.size();
        struct TreeNode *main_root = creatingBST(nums,0,nums_size-1);
        return main_root;
    }
    
    TreeNode* creatingBST(vector<int>& v, int start, int end) {
        if(start > end) {
            return NULL;
        }
        
        int mid = (start+end)/2;
        struct TreeNode *root = new TreeNode(v[mid]);
        
        root->left = creatingBST(v, start, mid-1);
        root->right = creatingBST(v, mid+1, end);
        return root;
    }
};
