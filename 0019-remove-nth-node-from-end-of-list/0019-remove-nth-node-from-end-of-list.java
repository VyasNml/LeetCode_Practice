/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        int count = 0;
        ListNode temp = head;
        while(temp!=null){
            temp = temp.next;
            count++;
        }
        ListNode prev = null;
        temp = head;
        for(int i=0;i<count-n;i++){
            prev = temp;
            temp = temp.next;
        }
        if(prev!=null && temp!=null){
            prev.next = temp.next;
            return head;
        }
        return temp.next;
    }
}