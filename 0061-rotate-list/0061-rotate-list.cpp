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
        if(head == NULL || head -> next == NULL){
            return head;
        }
        int len = 1;
        ListNode* curr = head;
        ListNode* temp = head;
        // int count = 0;
        while(curr -> next ){
            curr = curr -> next;
            len ++;
        }
        curr -> next = head;
        if(k %= len) 
        {
            for(auto i=0; i<len-k; i++) curr = curr->next;
        }
        temp = curr->next; 
        curr->next = NULL;
        return temp;
    }
    
};