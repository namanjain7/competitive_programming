//https://leetcode.com/problems/validate-binary-search-tree/

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    
    private boolean recursive(TreeNode node, Integer low, Integer high){
        if(node == null)
            return true;
        if(low != null && node.val <= low || high != null && node.val >= high){
            return false;
        }
        return recursive(node.left, low, node.val) && recursive(node.right, node.val, high);
    }
    
    public boolean isValidBST(TreeNode root) {
        return recursive(root, null, null);
    }
}
