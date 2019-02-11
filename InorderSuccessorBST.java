/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    boolean flag = false;
    List<TreeNode> inorder = new ArrayList<>();
    public TreeNode inorderSuccessor(TreeNode root, TreeNode p) {
        inorderHelper(root);
        for(int i = 0; i < inorder.size(); i++) {
            if(inorder.get(i).val == p.val && i+1 < inorder.size())
                return inorder.get(i+1);
        }
        return null;
    }
    
    public void inorderHelper(TreeNode root)    {
        if(root == null)
            return;
        
        inorderHelper(root.left);
        inorder.add(root);
        inorderHelper(root.right);
    }
    
}
