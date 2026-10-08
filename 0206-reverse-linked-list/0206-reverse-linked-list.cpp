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
        //using extra space 
    // stack<int>st;
    // ListNode* temp = head;

    // while(temp != NULL){
    //     st.push(temp->val);
    //     temp = temp->next;
    // }
    // temp = head;
    
    
    // while(temp != NULL){
    //    temp->val = st.top();
    //    st.pop();
    //    temp = temp->next;
    // }
    // return head;
    // 


    //without using extra space
    if(head == NULL){
        return head;
    }
    if(head->next == NULL){
        return head;
    }
    ListNode* preNode = NULL;
    ListNode* currNode = head;

    while(currNode != NULL){
        ListNode* nextNode = currNode->next;
        currNode->next = preNode;
        preNode = currNode;
        currNode = nextNode;
        }
    head = preNode;

    return head;
    }
};