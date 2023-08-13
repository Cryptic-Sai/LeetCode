// *
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };

class Solution {
public:
     ListNode* swapNodes(ListNode* head, int k) {
        if(head == NULL && head -> next == NULL)
            return NULL;
        
        ListNode* prev1 = head;
        ListNode* prev2 = head;
            
        ListNode* temp = head;
        int count =0;
        while(temp != NULL){
            count++;
            temp = temp -> next;
        }
         
         for(int i=0; i<k-1; i++){
             prev1 = prev1 -> next;
         }
         
         int len = (count -k) +1;
         
         for(int i=0; i<len-1; i++){
             prev2 = prev2-> next;
         }
         
         swap(prev1 -> val , prev2 -> val);
        return head;
    }
};