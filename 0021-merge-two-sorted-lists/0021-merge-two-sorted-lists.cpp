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
    void insertAtTail(ListNode* &head,int d){
        ListNode* n =new ListNode(d);
        ListNode* temp=head;
        if (head == NULL) {
            head = n;
            return;
        }
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* l1=NULL;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val < temp2->val){
                insertAtTail(l1,temp1->val);
                temp1=temp1->next;
            }
            else if(temp2->val < temp1->val){
                insertAtTail(l1,temp2->val);
                temp2=temp2->next;
            }
            else{
                insertAtTail(l1,temp2->val);
                insertAtTail(l1,temp1->val);
                temp1=temp1->next;
                temp2=temp2->next;
            }
        }
        while (temp1 != NULL) {
            insertAtTail(l1, temp1->val);
            temp1 = temp1->next;
        }
        while (temp2 != NULL) {
            insertAtTail(l1, temp2->val);
            temp2 = temp2->next;
        }
        return l1;
    }
};