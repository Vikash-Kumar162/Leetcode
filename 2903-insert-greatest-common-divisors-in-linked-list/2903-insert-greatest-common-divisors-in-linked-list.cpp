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
int GCD(int a, int b){
    int result = min(a, b);
    while(result > 0){
        if(a % result == 0 && b % result == 0){
            break;
        }
        result --;
    }
    return result;
}
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        // Edge case for single node -> No pair, No insertion
        if(! head->next) return head;

        ListNode* nextNode = head->next;
        ListNode* prev = head;
        while(nextNode != NULL){
            // int gcdVal = GCD(prev->val, nextNode->val);
            int gcdVal = __gcd(prev->val, nextNode->val);

            ListNode* curr = new ListNode(gcdVal);
            curr->next = nextNode;
            prev->next = curr;

            // Now move prev and nextNdoe

            prev = nextNode;
            nextNode = nextNode->next;
        }
        return head;
    }
};