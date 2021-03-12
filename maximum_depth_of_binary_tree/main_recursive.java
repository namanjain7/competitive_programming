//https://leetcode.com/problems/maximum-depth-of-binary-tree/

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
    
    public int depth(int d, TreeNode root){ 
        if(root == null){
            return d;
        }
        return Math.max(depth(d+1, root.left), depth(d+1, root.right));
    }
    
    public int maxDepth(TreeNode root) {
        return (depth(0, root));
    }
}
