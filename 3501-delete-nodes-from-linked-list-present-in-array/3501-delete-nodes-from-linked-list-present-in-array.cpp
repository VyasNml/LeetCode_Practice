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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int> removedElement;
        for(auto ele: nums){
            removedElement[ele]++;
        }
        ListNode* temp = new ListNode(-1);
        temp->next = head;
        ListNode* prev = temp;

        while(prev->next){
            if(removedElement.count(prev->next->val)){
                prev->next = prev->next->next;

            }else{
                prev = prev->next;
            }
        }

        return temp->next;
    }
};