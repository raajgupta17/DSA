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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode* preNode = NULL;
        ListNode* currNode = head;
        ListNode* newHead = head->next;

        while(currNode != NULL && currNode->next != NULL){
            ListNode* nextNode = currNode->next;
            currNode->next = nextNode->next;
            nextNode->next = currNode;

            if(preNode != NULL){
                preNode->next = nextNode;
            }
            preNode = currNode;
            currNode = currNode->next;

        }
        


        return newHead;
    }
};