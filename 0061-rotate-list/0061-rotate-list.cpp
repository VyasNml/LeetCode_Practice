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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || k==0)return head;
        int n = 0;
        ListNode* temp = head;
        while(temp){
            temp=temp->next;
            n++;
        }
        k = (k%n);
        if(k==0 || k==n || n==0 || n==1)return head;
        ListNode* prev=nullptr;
        ListNode* curr = head;
        for(int i=0;i<(n-k);i++){
            prev = curr;
            curr= curr->next;
        }
        prev->next = nullptr;
        temp = head;
        head = curr;
        while(curr){
            prev = curr;
            curr= curr->next;
        }
        prev->next = temp;
        return head;
    }
};