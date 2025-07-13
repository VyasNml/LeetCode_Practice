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
        
        int l = 0;
        ListNode* temp = head;
        while(temp != nullptr){
            temp = temp->next;
            l++;
        }
        if(l<=1){
            if(n==1){
                return nullptr;
            }
            return head;
        }
        if(l==n){
            return head->next;
        }
        l-=(n+1);
        ListNode* prev = head;
        temp = head->next;
        while(temp->next!=nullptr && l!=0){
            prev = temp;
            temp = temp->next;
            l--;
        }
        prev->next = temp->next;
        return head;
    }
};