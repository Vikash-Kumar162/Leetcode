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
ListNode* reverse(ListNode* &head){
    ListNode* prev=NULL;
    ListNode* curr=head;
    ListNode* forward=curr;
    while(curr != NULL){
        forward=forward->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Reverse both linked list
        // l1=reverse(l1);
        // l2=reverse(l2);
        // Now add both LL
        int carry=0;
        ListNode* ansHead=NULL;
        ListNode* ansTail=NULL;
        while(l1 != NULL && l2 != NULL){
            int sum = carry + l1->val + l2->val;
            int digit=sum % 10;
            carry = sum / 10;
            ListNode* newNode = new ListNode(digit);
            // attach the digit Node into ans Node
            if(ansHead == NULL){  // adding first node to ans
                ansHead=newNode;
                ansTail=newNode;
            }
            else{
                ansTail->next=newNode;
                ansTail=newNode;
            }
            l1=l1->next;
            l2=l2->next;
        }
        // Now may be 1 List exhausted and other have left some Nodes

        while(l1 != NULL){
            int sum=carry + l1->val;
            int digit=sum % 10;
            carry=sum / 10;
            ListNode* newNode= new ListNode(digit);
            // attach the node into ans list
            ansTail->next=newNode;
            ansTail=newNode;
            l1=l1->next;
        }
        // adding list 2 number
         while(l2 != NULL){
            int sum=carry + l2->val;
            int digit=sum % 10;
            carry=sum / 10;
            ListNode* newNode= new ListNode(digit);
            // attach the node into ans list
            ansTail->next=newNode;
            ansTail=newNode;
            l2=l2->next;
        }
        // now may be carry have left some value
        if(carry != 0){
            int sum=carry;
            int digit=sum%10;
            carry=sum/10;
            ListNode* newNode= new ListNode(digit);
            ansTail->next=newNode;
            ansTail=newNode;
        }
        // reverse ans 
        // ansHead=reverse(ansHead);
        // return ans head
        return ansHead;
    }
};