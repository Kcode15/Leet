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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* fast = head->next;
        ListNode* temp = head;
        ListNode* temp1 = head->next;
        while (fast != NULL && fast->next != NULL) {
            temp->next = fast->next;
            temp = temp->next;
            fast->next = temp->next;
            fast = fast->next;
        }
        temp->next = temp1;
        return head;
    }
};