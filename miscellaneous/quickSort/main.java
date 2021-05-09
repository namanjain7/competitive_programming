import java.util.*;

class Program {
  	public static int[] quickSort(int[] array) {
    quickSortHelper(array, 0, array.length - 1);
		return array;
  }
	
	public static void quickSortHelper(int[] array, int start, int end){
		if(start >= end)
			return;
		int pivot = start;
		int left = start + 1;
		int right = end;
		while(right >= left){
			if(array[left] > array[pivot] && array[pivot] > array[right]){
				swap(array, left, right);
			}
			if(array[left] <= array[pivot]){
				left += 1;
			}
			if(array[right] >= array[pivot]){
				right -= 1;
			}
		}
		swap(array, pivot, right);
		boolean leftArrayisSmaller = right - 1 - start < end - (right + 1);
		
		if(leftArrayisSmaller){
			quickSortHelper(array, start, right-1);
			quickSortHelper(array, right + 1, end);
		}
		else{
			quickSortHelper(array, right + 1, end);
			quickSortHelper(array, start, right-1);
		}
	}
	
	public static void swap(int[] array, int a, int b){
		int temp = array[a];
		array[a] = array[b];
		array[b] = temp;
		return;
	}
}
