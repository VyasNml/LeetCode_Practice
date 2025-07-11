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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* pre = head;
        ListNode* cur = head->next;
        while(pre!=nullptr && cur!=nullptr){
            if(cur->val!=0){
                pre->val+=cur->val;
                pre->next = cur->next;
                cur = pre->next;
                if(cur->next==nullptr)pre->next = nullptr;
                
            }else{
                pre=cur;
                cur=pre->next;
            }
        }
        return head;
    }
};