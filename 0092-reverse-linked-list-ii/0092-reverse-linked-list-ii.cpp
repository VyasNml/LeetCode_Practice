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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head->next==nullptr){
            return head;
        }
        if(left==right){
            return head;
        }

        ListNode* temp = head;
        for(int i=0;i<left-1;i++){
            temp = temp->next;
        }
        ListNode* st = temp;
        int arr[right-left+1];
        for(int i=0;i<right-left+1;i++){
            arr[i] = temp->val;
            temp = temp->next;
        }
        temp = st;
        for(int i=right-left;i>=0;i--){
            temp->val = arr[i];
            temp = temp->next;
        }

        return head;
    }
};