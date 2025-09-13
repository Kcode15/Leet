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
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode* temp = head;
        while(temp!=NULL){
            st.push(temp->val);
            temp=temp->next;
        }
        ListNode* temp1 = head;
        while(temp1!=NULL){
            int data = st.top();
            if(temp1->val!=data){
                return false;
            }
            st.pop();
            temp1 = temp1->next;
        }
        return true;
    }
};