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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        
        ListNode* curr = head;
        
        ListNode* prev = new ListNode(-101);
        ListNode* res = prev;
        prev->next = curr;
        // ListNode* forward = NULL;
        
        while(curr != NULL){
        
            if(curr ->next != NULL && curr -> val == curr -> next ->val){
                
                while(curr ->next != NULL && curr -> val == curr -> next ->val){
                    curr ->next = curr->next ->next;
                }
                
                prev ->next = curr -> next;
                curr = prev -> next;
                
            }else{ 
                prev = curr;
                curr = curr-> next;
            }
        }
        return res->next;
    }
};