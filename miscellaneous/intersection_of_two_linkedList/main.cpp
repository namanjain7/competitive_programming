//https://leetcode.com/problems/intersection-of-two-linked-lists


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
    void move(ListNode *&head){
        head = head -> next;
    }
    
    int get_length(ListNode *head){
        int length = 0;
        while(head != nullptr){
            head = head -> next;
            length++;
        }
        return length;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = get_length(headA);
        int lenB = get_length(headB);
        
        for(int i = 0; i < lenA - lenB; i++){
            move(headA);
        }
        for(int i = 0; i < lenB-lenA; i++){
            move(headB);
        }
        while(headA != headB){
            move(headA);
            move(headB);
        }
        return headA;
    }
};
