//https://leetcode.com/problems/intersection-of-two-linked-lists


/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    
    private int get_length(ListNode head){
        if(head == null){
            return 0;
        }
        return 1 + get_length(head.next);
    }
    
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        int lengthA = get_length(headA);
        int lengthB = get_length(headB);
        
        for(int i = 0; i < lengthA - lengthB; i++){
            headA = headA.next;
        }
        for(int i = 0; i < lengthB - lengthA; i++){
            headB = headB.next;
        }
        while(headA != headB){
            headA = headA.next;
            headB = headB.next;
        }
        return headA;
    }
}
