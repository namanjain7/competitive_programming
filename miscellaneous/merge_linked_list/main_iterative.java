import java.util.*;

class main {
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
    
    LinkedList p1 = headOne, p2 = headTwo, p1prev = null;
    while(p1 != null && p2 != null){
		if(p1.value < p2.value){
			p1prev = p1;
			p1 = p1.next;
		}
		else{
			if(p1prev != null){
				p1prev.next = p2;
			}
			p1prev = p2;
			p2 = p2.next;
			p1prev.next = p1;
		}
	}
	if(p2 != null){
		p1prev.next = p2;
	}
	
	return headOne.value < headTwo.value ? headOne : headTwo
  }
}
