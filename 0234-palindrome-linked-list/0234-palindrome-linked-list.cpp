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
    ListNode* reverseLL(ListNode* head) {
        if (head==NULL){
            return NULL; 
        } 
        ListNode* newHead = new ListNode(head->val);  
        ListNode* curr = head->next;
        while (curr!=NULL) {
            ListNode* newNode = new ListNode(curr->val);  
            newNode->next = newHead;  
            newHead = newNode;  
            curr = curr->next;
        }
            return newHead;  
    }

    bool isPalindrome(ListNode* head) {
        ListNode* l1;
        l1=reverseLL(head);
        ListNode* temp1=l1;
        ListNode* temp2=head;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val!=temp2->val){
                return false;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return true;
    }
};