import java.util.*;

class Program {

	private HashMap<Integer, ArrayList<Integer>> getMap(ArrayList<Integer> tasks){
		HashMap<Integer, ArrayList<Integer>> taskToIndices = new HashMap<Integer, ArrayList<Integer>>();
		for(int i = 0; i < tasks.size(); i++){
			int taskDuration = tasks.get(i);
			if(taskToIndices.containsKey(taskDuration)){
				taskToIndices.get(taskDuration).add(i);
			}
			else{
				ArrayList<Integer> temp = new ArrayList<Integer>();
				temp.add(i);
				taskToIndices.put(taskDuration, temp);
			}	
		}
		return taskToIndices;
}
	
  public ArrayList<ArrayList<Integer>> taskAssignment(int k, ArrayList<Integer> tasks) {
    // Write your code here.
		ArrayList<ArrayList<Integer>> result = new ArrayList<ArrayList<Integer>>(k);
		HashMap<Integer, ArrayList<Integer>> taskToIndices = getMap(tasks);
		Collections.sort(tasks);
		for(int i = 0; i < k; i++){
			int first = i, second = (2 * k) - 1 - i;
			int firstTask = tasks.get(first);
			int secondTask = tasks.get(second);
			ArrayList<Integer> temp = new ArrayList<Integer>(2);
			int index1 = taskToIndices.get(firstTask).remove(0);
			int index2 = taskToIndices.get(secondTask).remove(0);
			temp.add(index1);
			temp.add(index2);
			result.add(temp);
		}
    return result;
  }
}

