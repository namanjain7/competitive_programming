import java.util.*;

class Program {
  // This is an input class. Do not edit.
  public static class LinkedList {
    public int value;
    public LinkedList next;

    public LinkedList(int value) {
      this.value = value;
      this.next = null;
    }
  }

  public LinkedList removeDuplicatesFromLinkedList(LinkedList linkedList) {
    // Write your code here.
		LinkedList current = linkedList;
		while(current != null){
			LinkedList nextNode = current.next;
			while(nextNode != null && nextNode.value == current.value){
				nextNode = nextNode.next;
			}
			current.next = nextNode;
			current = nextNode;
		}
    return linkedList;
  }
}
