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
        ListNode* temp = head;
        int count = 0;
        while(temp!=NULL){
            temp=temp->next;
            count += 1;
        }

        if(head == NULL) return head;
        if(head->next == NULL) return head;

        k = k % count;
        if(k == 0) return head;

        temp = head;

        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next = head;

        int steps = count - k - 1;
        ListNode* newTail = head;

        for(int i=0;i<steps;i++){
            newTail = newTail->next;
        }

        ListNode* newHead = newTail->next;
        newTail->next = NULL;

        return newHead;
    }
};