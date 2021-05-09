import java.util.*;

class Program {
  // This is an input class. Do not edit.
  static class BinaryTree {
    public int value;
    public BinaryTree left = null;
    public BinaryTree right = null;

    public BinaryTree(int value) {
      this.value = value;
    }
  }

  public int binaryTreeDiameter(BinaryTree tree) {
    // Write your code here.
    return tracer(tree).diameter;
  }
	public node_info tracer(BinaryTree node){
		if(node == null) return new node_info(0, 0);
		
		node_info left = tracer(node.left);
		node_info right = tracer(node.right);
		
		int current_dia = left.height + right.height;
		int max_dia = Math.max(left.diameter, right.diameter);
		
		int max_until = Math.max(max_dia, current_dia);
		int current_max_height = 1 + Math.max(left.height, right.height);
		return new node_info(current_max_height, max_until);
	}
}

class node_info{
	public int height;
	public int diameter;
	
	public node_info(int h, int d){
		this.height = h;
		this.diameter = d;
	}
}
