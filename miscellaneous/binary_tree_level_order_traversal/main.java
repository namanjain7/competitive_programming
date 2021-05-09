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

    private List<List<Integer>> rec(TreeNode node, int level, List<List<Integer>> print){
        if(node == null)
            return print;
        List<Integer> temp;
        if(print.size() - 1 >= level){
            temp = print.get(level);
            temp.add(node.val);
            print.set(level, temp);
        }
        else{
            temp = new ArrayList<Integer>();
            temp.add(node.val);
            print.add(temp);
        }
        print = rec(node.left, level+1, print);
        print = rec(node.right, level+1, print);
        return print;
    }

    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> print = new ArrayList<>();
        if(root == null)
            return print;
        return rec(root, 0, print);
    }
}
