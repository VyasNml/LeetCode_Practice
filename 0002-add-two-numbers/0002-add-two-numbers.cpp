/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* temp = head;
        int carry = 0;
        while(l1 || l2 || carry!=0){
            int val1,val2; 
            val1 = ((l1) ? l1->val:0);
            val2 = ((l2) ? l2->val:0);
            ListNode* newNode = new ListNode(val1+val2+carry);
            carry = newNode->val/10;
            newNode->val%=10;
            temp->next = newNode;
            temp = temp->next;
            if(l1)l1 = l1->next;
            if(l2)l2 = l2->next;
        }
        return head->next;
    }
};