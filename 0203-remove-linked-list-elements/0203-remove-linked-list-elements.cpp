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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL)
            return NULL;
        
        
        ListNode* curr = head;
        ListNode* prev = new ListNode(-1);
        ListNode* temp = prev;
        prev -> next = head;
        while(curr != NULL){
            
        if(curr -> val ==  val ) {
            prev -> next = curr -> next;
            curr = curr -> next;
        }else{
            prev = curr;
            curr = curr -> next;
        }
    }
        return temp -> next;
}
};