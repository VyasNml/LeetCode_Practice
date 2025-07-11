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
    ListNode* partition(ListNode* head, int x) {
        int ar1[200];
        int ar2[200];
        int m=0,n=0;
        
        ListNode* tm = head;
        while(tm!=nullptr){
            if(tm->val < x){
                ar1[m++] = tm->val;
            }                
            tm = tm->next;
        }

        tm = head;
        while(tm!=nullptr){
            if(tm->val >= x){
                ar2[n++] = tm->val;
            }                
            tm = tm->next;
        }
        tm = head;
        for(int i=0;i<m;i++){
            tm->val = ar1[i];
            tm = tm->next;
        }
        for(int i=0;i<n;i++){
            tm->val = ar2[i];
            tm = tm->next;
        }       
        
        return head;
    }
};