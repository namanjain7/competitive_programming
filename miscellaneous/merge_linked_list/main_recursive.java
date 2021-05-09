import java.util.*;

class main_recursive.java {
  // This is an input class. Do not edit.
  public static class LinkedList {
    int value;
    LinkedList next;

    LinkedList(int value) {
      this.value = value;
      this.next = null;
    }
  }

  public static LinkedList mergeLinkedLists(LinkedList headOne, LinkedList headTwo) {
    // Write your code here.
    recursiveMerge(headOne, headTwo, null);
    return (headOne.value < headTwo.value) ? headOne : headTwo;
  }
  
  public static void recursiveMerge(LinkedList p1, LinkedList p2, LinkedList p1prev){
	  if(p1 == null){
		  p1prev.next = p2;
		  return;
	  }
	  if(p2 == null){
		  return;
	  }
	  
	  if(p1.value < p2.value){
			recursiveMerge(p1.next, p2, p1);
	  }
		
	  else{
			
		  if(p1prev != null){
			  p1prev.next = p2;
		  }
			
		  LinkedList newP2 = p2.next;
		  p2.next = p1;
		  recursiveMerge(p1, newP2, p2);
	}
	 
	}
}
