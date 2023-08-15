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
        
        while(curr -> next ){
            curr = curr -> next;
            len ++;
        }
//         After finding the length this last node will be pointing towards null
        curr -> next = head;
        k = k% len;
        k = len - k;
        
        while(k--) curr = curr -> next;
        
//         Since curr is standing at (len - k)th node so point it towards head;
        head = curr -> next;
        curr -> next = NULL ;
        
        return head;
    }
    
};