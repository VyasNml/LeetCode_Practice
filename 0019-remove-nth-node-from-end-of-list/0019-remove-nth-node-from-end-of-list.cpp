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
        if(head==nullptr)return head;
        ListNode* temp = head;
        int l=0;
        while(temp!=nullptr){
            temp = temp->next;
            l++;
        }
        if(l==n)return head->next;
        temp = head;
        for(int i=1;i<l-n;i++){
            temp = temp->next;
        }
        if(temp->next!=nullptr){
            temp->next = temp->next->next;
        }
        return head;
    }
};