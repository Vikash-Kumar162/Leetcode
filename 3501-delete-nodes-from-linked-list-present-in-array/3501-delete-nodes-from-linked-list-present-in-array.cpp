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
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]] ++;
        }
        ListNode* prev = new ListNode(-1);
        while(mp.find(head->val) != mp.end()){
            prev = head;
            head = head->next;
        }
        prev->next = NULL;
        ListNode* curr = head;
        prev = new ListNode(-1);
        while(curr != NULL){
            if(mp.find(curr->val) != mp.end()){
                prev->next = curr->next;
                curr->next = NULL;
                curr = prev->next;
            }
            else{
                prev = curr;
                curr = curr->next;
              
            }
        }
        return head;
    }
};