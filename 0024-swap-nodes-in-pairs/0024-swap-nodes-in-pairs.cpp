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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)return head;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast){
            swap(slow->val,fast->val);
            slow = slow->next->next;
            if(!fast->next)break;
            fast = fast->next->next;
        }
        return head;
    }
};