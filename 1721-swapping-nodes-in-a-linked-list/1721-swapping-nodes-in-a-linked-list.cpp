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
    int getLength(ListNode* head){
        ListNode* temp = head;
        int count = 0;
        while(temp!=nullptr){
            count ++;
            temp = temp->next;
        }
        return count;
    }

    ListNode* swapNodes(ListNode* head, int k) {
        int l = getLength(head);

        ListNode* left = nullptr;
        ListNode* right = nullptr;
        ListNode* temp = head;
        for(int i=0;i<l;i++){
            if(i==k-1)left = temp;
            if(i==l-k)right = temp;
            temp = temp->next;
        }
        swap(left->val,right->val);
        return head;
    }
};