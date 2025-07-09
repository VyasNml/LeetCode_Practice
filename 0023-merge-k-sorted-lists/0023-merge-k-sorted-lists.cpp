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
    ListNode* mergeTwo(ListNode* h1,ListNode* h2){
        ListNode* pre = h1;
        ListNode* temp;
        ListNode* cur = h1->next;
        while(pre!=nullptr && h2!=nullptr){
            if(pre->next==nullptr)temp = pre;
            if(h2->val<=pre->val){
                ListNode* newNode = new ListNode(pre->val);
                pre->val = h2->val;
                newNode->next = pre->next;
                pre->next = newNode;
                pre = newNode;
                h2 = h2->next;
            }else{
                pre = cur;
                if(cur!=nullptr) cur = cur->next;
            }
        }
        if(pre==nullptr && h2!=nullptr){
            temp->next = h2;
        }
        return h1;
    }
    ListNode* mergeKLists(vector<ListNode*>& l) {
        if(l.size()==0){
            return nullptr;
        }
        vector<ListNode*> lists;
        for(ListNode* x : l){
            if(x!=nullptr){
                lists.push_back(x);
            }
        }

        if(lists.size()==0){
            return nullptr;
        }
        for(int i=1;i<lists.size();i++){
            lists[0] = mergeTwo(lists[0],lists[i]);
        }
        
        return lists[0];
    }
};