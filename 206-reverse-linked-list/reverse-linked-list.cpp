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
    ListNode* reverseList(ListNode* head) {
        //0. Brute Force - Vector based node value changing
        // vector<int> ans;
        // ListNode * temp = head;
        // while(temp){
        //     ans.push_back(temp->val);
        //     temp = temp->next;
        // }
        // // reverse(ans.begin(), ans.end());
        // int i=ans.size()-1;
        // temp = head;
        // while(temp){
        //     temp->val = ans[i];
        //     temp = temp->next;
        //     i--;
        // }
        // return head;

        //1. Iterative - changing pointers
        // ListNode* curr = head, *prev = NULL, *future = NULL;
        // while(curr){
        //     future = curr->next;
        //     curr->next = prev;
        //     prev = curr;
        //     curr = future;
        // }
        // head = prev;
        // return head;

        //2. Recursive
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* newHead = reverseList(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = NULL;
        return newHead;
    }
};