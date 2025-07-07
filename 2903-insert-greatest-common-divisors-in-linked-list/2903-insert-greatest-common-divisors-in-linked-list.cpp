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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==nullptr || head->next==nullptr)return head;
        ListNode* prev = head;
        ListNode* curr = head->next;
        while (curr!=nullptr){
            ListNode* newNode = new ListNode(gcd(prev->val,curr->val));
            newNode->next = curr;
            prev->next = newNode;
            prev = curr;
            curr = curr->next;
        }
        return head;
    }
};