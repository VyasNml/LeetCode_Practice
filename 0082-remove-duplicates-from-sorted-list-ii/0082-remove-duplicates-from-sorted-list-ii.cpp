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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr)return head;
        ListNode* prev = nullptr;
        ListNode* curr = head;
        if(head->next==nullptr)return head;
        ListNode* next = head->next;

        while(curr!=nullptr && next!=nullptr){
            if(curr && next && curr->val==next->val){
                int deleteVal = curr->val;
                while(curr!=nullptr && curr->val==deleteVal){
                    curr = curr->next;
                    if(prev==nullptr)head=curr;
                    if(prev!=nullptr)prev->next = curr;
                    if(curr==nullptr)break;
                    next = curr->next;
                }
            }else{
                prev = curr;
                curr = curr->next;
                next = next->next;
            }
        }
        return head;
    }
};