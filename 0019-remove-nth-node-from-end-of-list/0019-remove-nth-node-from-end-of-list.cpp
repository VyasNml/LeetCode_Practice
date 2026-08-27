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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 0;
        while(temp){
            count++;
            temp = temp->next;
        }
        temp = head;
        ListNode* prev = nullptr;
        for(int i=count-n;i>0;i--){
            prev = temp;
            temp = temp->next;
        }
        if(temp && prev){
            prev->next = temp->next;
            return head;
        }else{
            return temp->next;
        }
    }
};