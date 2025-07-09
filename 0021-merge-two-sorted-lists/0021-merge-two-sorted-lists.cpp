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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==nullptr)return l2;
        if(l2==nullptr)return l1;
        ListNode* pre = l1;
        ListNode* cur = l1->next;
        ListNode* temp;
        while(pre!=nullptr && l2!=nullptr){
            if(cur==nullptr)temp = pre;
            if(l2->val<=pre->val){   
                ListNode* newNode = new ListNode(pre->val);
                pre->val = l2->val;
                newNode->next = pre->next;
                pre->next = newNode;
                pre = newNode;
                l2 = l2->next;
            }else{
                pre = cur;
                if(cur!=nullptr)cur = cur->next;
            }
        }
        if(pre==nullptr && l2!=nullptr){
            temp->next = l2;
        }
        return l1;
    }
};