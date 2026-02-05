/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int getLength(ListNode* head){
        int count = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1 = getLength(headA);
        int l2 = getLength(headB);
        int diff = abs(l1-l2);
        for(int i=0;i<diff;i++){
            if(headA==NULL || headB==NULL)return NULL;
            if(l1>l2){
                headA = headA->next;
            }else{
                headB = headB->next;
            }
        }
        while(headA!=NULL && headB!=NULL){
            if(headA==headB)return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};