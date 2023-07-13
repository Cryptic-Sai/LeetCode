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

ListNode* reverse1(ListNode* head){
//     base case
    if(head == NULL || head -> next == NULL){
        return head;
    }
    
//     procseeding through recursion
    ListNode* smallhead = reverse1(head -> next);
    
    head -> next -> next = head;
    head -> next = NULL;
    
    return smallhead;
    
}

void reverse(ListNode* &head, ListNode* curr, ListNode* prev){
    if(curr == head){
        head = prev;
        return ;
    }
   ListNode* forward = curr -> next;
    reverse(head, forward, curr);
    curr -> next;
}

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        return reverse1(head);
        // if(head == NULL || head -> next == NULL){
        //     return head;
        // }
        // ListNode* prev = NULL;
        // ListNode* curr = head;
        // ListNode* forward = NULL;
        // while(curr != NULL){
        //    forward = curr -> next;
        //    curr -> next = prev;
        //    prev = curr;
        //     curr = forward;
        // }
        // return prev;
    }
};