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
    bool hasCycle(ListNode *head) {
        // ListNode* slow = head;
        // ListNode* fast = head;

        // while(fast != NULL && fast->next != NULL){
        //     slow = slow -> next;
        //     fast = fast -> next -> next;
        //     if(slow == fast){
        //         return true;
        //     }
        // }
        // return false;

        if(head == NULL) return false;
        map<ListNode*, bool> visited;
        ListNode* temp = head;
        while(temp != NULL){
            if(visited[temp] == true) return true;

            visited[temp] = true;
            temp = temp->next;
        }
        return false;
    }
};