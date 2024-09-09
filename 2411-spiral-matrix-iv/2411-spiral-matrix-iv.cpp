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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> spiral(m, vector<int>(n, -1));

        int startingRow = 0, startingCol = 0;
        int endingRow = m - 1, endingCol = n - 1;
        while(head){
            // Starting row 
            for(int index=startingCol; head && index<=endingCol; index++){
                spiral[startingRow][index] = head->val;
                head = head->next;
            }
            startingRow ++;

            // Ending Column
            for(int index=startingRow; head && index<=endingRow; index++){
                spiral[index][endingCol] = head->val;
                head = head->next;
            }
            endingCol --;

            // Ending Row
            for(int index=endingCol; head && index>=startingCol; index--){
                spiral[endingRow][index] = head->val;
                head = head->next;
            }
            endingRow --;

            // Starting Col
            for(int index=endingRow; head && index>=startingRow; index--){
                spiral[index][startingCol] = head->val;
                head = head->next;
            }
            startingCol ++;
        }
        return spiral;
    }
};