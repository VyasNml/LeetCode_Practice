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
    ListNode* removeNodes(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        stack<ListNode*> st;
        ListNode* temp = head;
        while(temp!=nullptr){
            st.push(temp);
            temp = temp->next;
        }
        temp = st.top();
        st.pop();
        while(!st.empty()){
            if(st.top()->val<temp->val){
                st.pop();
            }else{
                st.top()->next = temp;
                temp = st.top();
                st.pop();
            }
        }
        return temp;
    }
};