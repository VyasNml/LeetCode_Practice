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
    ListNode* reversal(ListNode* head){
        ListNode* pre = nullptr;
        ListNode* cur = head;
        ListNode* nxt = nullptr;
        while(cur!=nullptr){
            nxt = cur->next;
            cur->next = pre;
            pre = cur;
            cur=nxt;
        }
        return pre;
    }
    bool isPalindrome(ListNode* head) {
       ListNode* slow = head;
       ListNode* fast = head;
       while(fast!=nullptr && fast->next!=nullptr){
        slow = slow->next;
        fast = fast->next->next;
       }
       ListNode* head2 = reversal(slow);

        ListNode* t1 = head2;
        ListNode* t2 = head;
        while(t1!=nullptr){
            if(t1->val!=t2->val)return false;
            t1 = t1->next;
            t2 = t2->next;
        }
        return true;
    }
};