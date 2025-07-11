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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr) return head;
        ListNode* s = head;
        if(s->next==nullptr){
            return nullptr;
        }
        ListNode* f = head->next;
        if(f->next==nullptr){
            s->next = nullptr;
            return head;
        }

        while(f->next!=nullptr && f->next->next!=nullptr){
            s = s->next;
            f = f->next->next;
        }
        s->next = s->next->next;
        cout << s->val;
        return head;
    }
};