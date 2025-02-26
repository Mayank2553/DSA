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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL||k==0){
            return head;
        }
        ListNode* prev = head,*move = head;
        ListNode *for_len = head;
        int length = 0;
        while(for_len!=NULL){
            length++;
            for_len = for_len->next;
        }
        k = k%length;
        while(k){
            while(move->next!=NULL){
                prev = move;
                move = move->next;
            }
            move->next = head;
            head = move;
            prev->next = NULL;
            k--;
        }
        return head;
    }
};