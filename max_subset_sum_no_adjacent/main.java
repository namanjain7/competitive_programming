import java.util.*;

class Program {
  public static int maxSubsetSumNoAdjacent(int[] array) {
    // Write your code here.
		if(array.length == 0) return 0;
		if(array.length == 1) return array[0];
		int first = array[0];
		int second = Integer.max(array[0], array[1]);
		int current;
		for(int i = 2; i < array.length; i++){
			current = Integer.max(second, first + array[i]);
			first = second;
			second = current;
		}
    return Integer.max(first, second);
  }
}

