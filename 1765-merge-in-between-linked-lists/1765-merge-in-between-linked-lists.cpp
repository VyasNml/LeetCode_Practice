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
    ListNode* mergeInBetween(ListNode* l1, int a, int b, ListNode* l2) {
        if(l1==nullptr)return l2;
        if(l2==nullptr)return l1;

        ListNode* pre = l1;
        ListNode* cur = l1->next;
        ListNode* temp = l2;
        while(temp->next!=nullptr){
            temp=temp->next;
        }

        for(int i=0;i<=b;i++){
            if(i==a-1) pre->next = l2;
            pre = cur;
            cur = cur->next;
        }
        temp->next = pre;
        return l1;
    }
};