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
        if(head==nullptr || head->next == nullptr)return head;
        ListNode* h1 = new ListNode(0);
        ListNode* h2 = new ListNode(0);

        ListNode* i = h1;
        ListNode* j = h2;

        ListNode* temp=head;

        while(temp!=nullptr){
            if(temp->val<x){
                i->next=temp;
                i=i->next;
            }else{
                j->next=temp;
                j=j->next;

            }
            temp = temp->next;
        }
        j->next = nullptr;
        h2=h2->next;
        i->next = h2;
        h1=h1->next;
        return h1;
    }
};