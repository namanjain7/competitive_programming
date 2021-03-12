import java.util.*;

class main {

  public ArrayList<ArrayList<Integer>> taskAssignment(int k, ArrayList<Integer> tasks) {
    // Write your code here.
		ArrayList<Integer> pair = new ArrayList<Integer>();
		ArrayList<ArrayList<Integer>> result = new ArrayList<ArrayList<Integer>>();
		Collections.sort(tasks);
		
		for(int i = 0; i < k; i++){
			pair.add(tasks.get(i));
			pair.add(tasks.get(tasks.size() - i - 1));
			result.add(pair);
			pair.clear();
		}
		System.out.println(result);
    return result;
  }
  
  public static void main(String[]){
	int k = 3;
	ArrayList<Integer> in = new ArrayList<Integer>();
	in.add(1);
	in.add(3);
	in.add(5);
	in.add(3);
	in.add(1);
	in.add(4);
	taskAssignment(k, in);
	return;
  }
  
}
