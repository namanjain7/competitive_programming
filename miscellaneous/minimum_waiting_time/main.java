import java.util.*;

class Program {

  public int minimumWaitingTime(int[] queries) {
    // Write your code here.
		if(queries.length == 0 || queries.length == 1){
			return 0;
		}
		Arrays.sort(queries);
		int count = 0, before = 0;
		for(int i = 0; i < queries.length-1; i++){
			count = count + before + queries[i];
			before += queries[i];
		}
    return count;
  }
}
