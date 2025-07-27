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
        if(k==0)return head;
        ListNode* temp = head;
        int l=0;
        while(temp!=nullptr){
            temp = temp->next;
            l++;
        }
        if(l<=1 || l==k)return head;
        if(k>l)k%=l;
        if(k==0 ||l==k)return head;
        temp = head;
        ListNode* m;
        for(int i=0;i<l-k-1;i++){
            temp = temp->next;
        }
        m = temp->next;
        temp->next = nullptr;
        temp = m;
        while(temp->next!=nullptr){
            temp = temp->next;
        }
        temp->next = head;
        return m;
    }
};