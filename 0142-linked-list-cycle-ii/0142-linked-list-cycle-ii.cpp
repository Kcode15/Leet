/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* temp=head;
        map<ListNode*,bool> visited;
        while(temp!=NULL){
            if(visited[temp]==true){
                return temp;
            }
            visited[temp]=true;
            temp=temp->next;
        }
        return NULL;
    }
};