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
    int carry(ListNode* node){
        if(node==nullptr)return 0;
        int c = carry(node->next);
        node->val = (node->val*2)+c;
        if(node->val>0){
            int v = node->val;
            node->val%=10;
            return v/10;
        }else{
            return 0;
        }
    }
    ListNode* doubleIt(ListNode* head) {
        int c = carry(head);
        if(c>0){
            ListNode* newNode = new ListNode(c);
            newNode->next = head;
            head = newNode;
        }
        
        return head;
    }
};