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
    
    int getLength(ListNode* head) {
    int length = 0;
    ListNode* temp =head;

    while(temp != NULL) {
        length++;
        temp = temp -> next;
    }
    return length;
    }
    
    
    ListNode* reverseK(ListNode* &head, int k, int length){
         
     if(head == NULL || head -> next == NULL || k == 1 || length < k){
            return head;
        }
        
        ListNode* curr = head;
        ListNode* forward = NULL;
        ListNode* prev = NULL;
        int count =0;
        
        while(curr != NULL && count < k){
            forward = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
            count++;
        }
        
        if(forward != NULL){
             head -> next = reverseK(forward, k, (length-k));
        }
              
        return prev;    
 }
    ListNode* reverseKGroup(ListNode* head, int k) {
        // getLength(head);
        
    int len = getLength(head);
    
    return reverseK(head, k, len);
        
    }
};