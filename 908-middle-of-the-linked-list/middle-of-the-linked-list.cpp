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
    ListNode* middleNode(ListNode* head) {
        //1. Brute Force approach
        // ListNode* temp = head;
        // int count = 0;
        // while(temp){
        //     count++;
        //     temp = temp->next;
        // }
        // int midNode = (count/2) + 1;
        // temp = head;
        // while(temp){
        //     midNode -= 1;
        //     if(midNode == 0){
        //         break;
        //     }
        //     temp = temp->next;
        // }
        // return temp;


        //2. Tortoise and Hare Method
        ListNode* slow = head, *fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};