import java.util.*;

class Program {
	
	private int square(int n){
		return n*n;
	}

  public int[] sortedSquaredArray(int[] array) {
    // Write your code here.
		int[] res = new int[array.length];
		int s = 0, l = array.length-1, ind = array.length-1;
		while(s <= l){
			if(square(array[s]) >= square(array[l])){
				res[ind] = square(array[s]);
				s++;
				ind--;
			}
			else{
				res[ind] = square(array[l]);
				l--;
				ind--;
			}
		}
    return res;
  }
}
